<?php 
	$a = preg_replace("/(a)/e", "strtoupper('\\1')", "abcabc"); 
	print $a."\n"; 
?>
