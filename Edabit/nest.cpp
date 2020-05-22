int wordNest(std::string word, std::string nest) {
	int i=nest.length();
	int j=word.length();
	i=i-j;
	int depth=i/j;
	return depth;
	
}
