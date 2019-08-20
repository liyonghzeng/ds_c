<?php

    $arr = [

        'name'  => "zhangsan",
        'age'   => 11,
        'email' => "zhangsan@qq.com"

    ];


    function test1(&$arr)
    {
        $arr['height'] = 200;
    }


    test1($arr);


    echo '<pre>';print_r($arr);echo '</pre>';


