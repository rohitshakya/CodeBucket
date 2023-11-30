function pipeline(Q, queries) {
    const pipeline = [];
    const removals = [];
  
    for (let i = 0; i < Q; i++) {
      const [X, N] = queries[i];
  
      if (X === 1) {
        // Insert number N into the pipeline from the top
        pipeline.unshift(N);
      } else if (X === 2) {
        // Take out the integer with the highest frequency
        let maxFrequency = 0;
        let maxNumber = null;
        let indexToRemove = -1;
  
        for (let j = 0; j < pipeline.length; j++) {
          const currentNumber = pipeline[j];
          const frequency = pipeline.filter((num) => num === currentNumber).length;
  
          if (frequency > maxFrequency || (frequency === maxFrequency && j < indexToRemove)) {
            maxFrequency = frequency;
            maxNumber = currentNumber;
            indexToRemove = j;
          }
        }
  
        // Remove the occurrence closest to the open end of the pipeline
        if (indexToRemove !== -1) {
          pipeline.splice(indexToRemove, 1);
          removals.push(maxNumber);
        } else {
          removals.push(-1);
        }
      }
    }
  
    return removals;
  }
  
  