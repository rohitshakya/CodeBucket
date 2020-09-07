<?php

	$n=5;
	$p=1;
	$q=1;
	$m;
	for($i=0;$i<n;$i++)
	{
		for($j=$n;$j>$i;$j--)
		{
			echo " ";
		}
		$m=$p;
		for($k=0;$k<=$i;$k++)
		{
			echo $p--;
		}
		for($l=1;$l<=$i;$l++)
		{
			echo $p--;
		}
		$p=$m+2;
		echo "<br>";
	}

?>