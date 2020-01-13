<?php
use GTK\App;

include dirname(__DIR__) . '/src/App.php';
$gtk = new App();

function step()
{
    static $i = 0;
    $i++;
    $ar = debug_backtrace(DEBUG_BACKTRACE_IGNORE_ARGS,2);
    echo("run step $i in file {$ar[0]['file']}({$ar[0]['line']})\n");
}