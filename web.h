#pragma once
#include <pgmspace.h>
const char htmlHomePage[] PROGMEM = R"HTMLHOMEPAGE(
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>RFID Custom Config</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.7.1/jquery.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>
    <style>
        body {
            background-color: #F7F9F2;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
            /* background-color: #ecf0f1; */
            /* Màu nền cho trang */
            letter-spacing: 1px;
        }

        .home {
            display: flex;
            justify-content: center;
            font-size: 100px;
        }

        .des {
            font-size: 60px;
        }

        .menu {
            display: block;
            text-align: center;
            align-items: center;
            background-color: #91DDCF;
        }

        .tex-menu {
            color: #fff;
            font-size: 19px;
        }

        .container {
            /*display: flex;*/
            width: 600px;
            /* Tổng chiều rộng của cả hai div */
            padding: 20px;
            border: 2px solid #3498db;
            background-color: #fff;
            text-align: center;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
        }

        .left {
            flex: 1;
            /* Chia chiều rộng tỉ lệ 1:1 */
            padding-right: 10px;
        }

        .right {
            border-radius: 8px;
            background-color: #fff;
            padding: 20px 20px 20px;
            flex: 1;
            /* Chia chiều rộng tỉ lệ 1:1 */
            padding-left: 10px;
            /* border-left: 1px solid #3498db; */
            width: 570px;
            text-align: left;
            display: flex;
            flex-direction: column;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.5);
            /* Đổ bóng */
            transition: box-shadow 0.3s ease;
            /* Hiệu ứng chuyển đổi khi hover */
        }

        .right:hover {
            box-shadow: 0 10px 20px rgba(0, 0, 0, 0.7);
        }

        .top {
            margin-bottom: 10px;
            border-bottom: 1px solid #3498db;
            padding-bottom: 10px;
        }

        .line-divider {
            width: 100%;
            height: 1px;
            background-color: #3498db;
            margin: 10px 0;
        }

        .scroll-area {
            margin: 0px 5px 0px 17px;
            border-radius: 10px;
            max-height: 250px;
            min-height: 250px;
            overflow-y: auto;
            border: 3px solid #F19ED2;
            padding: 10px;
            text-align: left;
            font-size: small;
        }

        .clear-button {
            margin: 0px 5px 0px 17px;
            margin-top: 10px;
            border-radius: 8px;
            padding: 8px 16px;
            background-color: #F19ED2;
            color: #fff;
            border: none;
            cursor: pointer;
            transition: background-color 0.3s ease-in-out;
        }

        .clear-button:hover {
            background-color: #E8C5E5;
        }

        /* Nút cho phần bên phải */
        .action-button {
            margin: 0px 5px 0px 17px;
            border-radius: 8px;
            margin-top: 10px;
            font-size: 18px;
            padding: 8px 16px;
            background-color: #91DDCF;
            color: #000;
            font-weight: normal;
            border: none;
            cursor: pointer;
            transition: background-color 0.3s ease-in-out;
        }

        .action-button:hover {
            background-color: #83b9af;
        }

        /* Phần control cho phần bên phải */
        .control {
            text-align: center;
            margin-bottom: 15px;
        }

        .control-title {
            font-size: 25px;
            padding-top: 20px;
            font-weight: bold;
        }

        /* Form cho phần bên phải */
        .form-container {
            margin-top: 0px;
            display: flex;
            flex-direction: column;
        }

        .form-input {
            margin: 0px 0px 0px 17px;
            margin-bottom: 10px;
            display: flex;
            flex-direction: column;
        }

        .form-input label {
            display: block;
            font-weight: 100;
            margin-bottom: 5px;
        }

        .form-input input {
            border: 1px solid #ccc;
            width: calc(100% - 10px);
            border-radius: 4px;
            padding: 8px;
            box-sizing: border-box;
        }

        .header-menu {
            display: flex;
            position: fixed !important;
            top: 0 !important;
            left: 0 !important;
            width: 100vw !important;
        }



        .header-menu .menu:not(:last-child)::after {
            content: "";
            position: absolute;
            top: 0;
            right: 0;
            height: 100%;
            width: 5px;
            background-color: white;
            /* Màu sắc của đường kẻ */
        }

        .header-menu li {
            width: 33%;
        }

        .read-body {
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            /* Đổ bóng */
            transition: box-shadow 0.3s ease;
            border-radius: 8px;
            width: 520px;
            background-color: #fff;
            padding: 10px 20px;
            padding-bottom: 30px;
        }

        .read-body:hover {
            box-shadow: 0 10px 20px rgba(0, 0, 0, 0.5);
        }

        .form-out {
            margin-bottom: 10px;
            display: flex;
            flex-direction: column;
        }

        .form-out label {
            display: block;
            font-weight: 100;
            margin-bottom: 5px;
        }

        .title-read {
            text-align: center;
            margin-bottom: 15px;
        }

        .title-read h3 {
            font-weight: bold;
            font-size: 25px;
            padding-top: 20px;
        }

        /* .nav-tabs>li.active>a, .nav-tabs>li.active>a:focus {
            border-radius: 10px;
            color: #000;
            cursor: default;
            background-color: #F19ED2;
            border: 1px solid #ddd;
            border-bottom-color: transparent;
        }
        .nav-tabs>li.active>a:hover {

        } */
    </style>
</head>

<body>
    <div>
        <ul class="nav nav-tabs header-menu">
            <li class="menu active"><a class="tex-menu" data-toggle="tab" href="#home">GIỚI THIỆU</a></li>
            <li class="menu"><a class="tex-menu" data-toggle="tab" href="#menu2">GHI DỮ LIỆU</a></li>
            <li class="menu"><a class="tex-menu" data-toggle="tab" href="#menu3">ĐỌC DỮ LIỆU</a></li>
        </ul>
        <div class="tab-content">
            <div id="home" class="tab-pane fade in active">
                <h3 class="home">GIỚI THIỆU</h3>
                <p class="des">Hệ thống mô tả đọc ghi dữ liệu trên rẻ RFID</p>
            </div>
            <div id="menu2" class="tab-pane fade">
                <div class="right">
                    <!-- Form cho phần bên phải -->
                    <div class="control">
                        <div class="control-title">Nhập Thông Tin</div>
                        <!-- Nội dung control có thể được thêm vào đây -->
                    </div>
                    <div class="form-container">
                        <div class="form-input">
                            <label for="name">Name:</label>
                            <input type="text" id="name" name="name" autocomplete="off" maxlength="16">
                        </div>
                        <div class="form-input">
                            <label for="license">License:</label>
                            <input type="text" id="license" name="license" autocomplete="off" maxlength="16">
                        </div>
                        <div class="form-input">
                            <label for="cccd">CCCD:</label>
                            <input type="text" id="cccd" name="cccd" autocomplete="off" maxlength="16px">
                        </div>
                        <!-- Phần Authentication -->
                        <div class="form-input">
                            <label for="authenticationKey">Authentication (KeyA):</label>
                            <input type="text" id="authenticationKey" name="authenticationKey" autocomplete="off"
                                maxlength="17" oninput="formatKey(this)" style="text-transform: uppercase;">
                        </div>
                        <button class="action-button" onclick="submitForm()">Thêm</button>
                        <div class="control">
                            <div class="control-title">Trạng thái</div>
                            <!-- Nội dung control có thể được thêm vào đây -->
                        </div>
                        <div class="scroll-area none">
                            <!-- Nội dung có thể được thêm vào đây -->
                            <!-- Dùng thẻ div với class "clear-button" để tạo nút "Clear" -->
                        </div>
                        <button class="clear-button none" onclick="clearContent()">Xóa</button>
                    </div>
                </div>
            </div>
            <div id="menu3" class="tab-pane fade">
                <div class="left">
                    <div class="control">
                        <div class="control-title" style="display: none;">Thông Tin Trên Thẻ</div>
                        <!-- Nội dung control có thể được thêm vào đây -->
                    </div>
                    <div class="scroll-area none" style="display: none;">
                        <!-- Nội dung có thể được thêm vào đây -->
                        <!-- Dùng thẻ div với class "clear-button" để tạo nút "Clear" -->
                    </div>
                    <button class="clear-button none" onclick="clearContent()" style="display: none;">Xóa</button>
                    <div class="read-body">
                        <div class="title-read">
                            <h3>Đọc thẻ</h3>
                        </div>
                        <!-- <div>
                            <label for="key">Nhập key</label>
                            <input type="text" name="key" id="key" class="form-control" />
                            <button class="btn btn-primary mt-3">Nhập key</button>
                        </div> -->
                        <div class="pt-3">
                            <div class="pb-3 form-out">
                                <label for="read_time">Time</label>
                                <input type="text" id="read_time" class="form-control" />
                            </div>
                            <div class="pb-3 form-out">
                                <label for="read_name">Tên</label>
                                <input type="text" id="read_name" class="form-control" />
                            </div>
                            <div class="pb-3 form-out">
                                <label for="read_cccd">CCCD</label>
                                <input type="text" id="read_cccd" class="form-control" />
                            </div>
                            <div class="pb-3 form-out">
                                <label for="read_license_plate">License</label>
                                <input type="text" id="read_license_plate" class="form-control" />
                            </div>
                        </div>
                    </div>
                </div>
                <style>
                    .confirmation {
                        display: none;
                        position: fixed;
                        width: 480px;
                        padding: 20px 30px;
                        top: 30%;
                        left: 50%;
                        transform: translate(-50%);
                        background-color: #fff;
                        border: 1px solid #000;
                        box-shadow: rgba(0, 0, 0, 0.24) 0px 3px 8px;
                        border-radius: 5px;
                        transition: all 0.5s;
                        z-index: 100;
                    }

                    .confirmation .action {
                        display: flex;
                        align-items: center;
                        gap: 10px;
                    }

                    #blur-bg {
                        display: none;
                        position: fixed;
                        top: 0;
                        left: 0;
                        width: 100vw;
                        height: 100vh;
                        background: #fff;
                        opacity: .7;
                        z-index: 99;
                    }

                    #checkError {
                        display: none;
                    }
                </style>
                <div id="blur-bg"></div>
                <div id="confirmation-popup" class="confirmation">
                    <div class="pb-3 form-out">
                        <label for="input_uid">Vui lòng nhập UID:</label>
                        <input type="password" id="input_uid" class="form-control" />
                    </div>
                    <div class="action">
                        <button id="checkUidBtn" class="btn btn-primary">Xác nhận</button>
                        <label id="checkError" class="text-danger">*UID không chính xác</label>
                    </div>
                </div>
            </div>
        </div>
    </div>

    <script>
        var ws;
        let name, license, cccd, authenticationKey;
        let view_area = document.querySelector('.scroll-area');
        const showArea = (content, status, show_status = true) => {
            const currentDate = new Date();
            const _time = `${currentDate.getHours()}:${currentDate.getMinutes()}:${currentDate.getSeconds()} ${currentDate.toDateString()}`;
            let _status;
            if (show_status) {
                _status = (status["err_code"] == 0) ? `<span style="color:#91DDCF">GHI THÀNH CÔNG</span>` : `<span style="color:red">GHI THẤT BẠI: ${status["msg"]}</span>`;
            }
            let msg = `<div><b>${_time}</b><br>`;
            $('#read_time').val(_time);
            msg += content;
            if (!show_status) {
                msg += `<br>-------------------------<br>`;
            } else {
                msg += `<br>Trạng thái: ${_status}<br>-------------------------<br>`;
            }
            msg += "</div>";
            view_area.innerHTML += msg;
            view_area.scrollTop = view_area.scrollHeight;
        };
        function formatKey(input) {
            const cleanedInput = input.value.replace(/[^A-Za-z0-9]/g, '');
            let formatedKey = '';
            for (let i = 0; i < cleanedInput.length; i += 2) {
                formatedKey += cleanedInput.substr(i, 2) + '-';
            }
            formatedKey = formatedKey.slice(0, -1);
            input.value = formatedKey;
        }
        function clearContent() {
            view_area.innerHTML = '';
        }
        function submitForm() {
            // Xử lý khi nút "Submit" được nhấp
            name = document.getElementById('name').value;
            license = document.getElementById('license').value;
            cccd = document.getElementById('cccd').value;
            authenticationKey = document.getElementById('authenticationKey').value;
            if (name === '' || license === '' || cccd === '' || authenticationKey === '') {
                alert('Vui lòng điền đầy đủ thông tin!');
                return;
            }
            const msg = { type: "add_card", name, license, cccd, authenticationKey };
            ws.send(JSON.stringify(msg));
        }

        let uid = '';
        let time = '';
        let card_name = '';
        let card_cccd = '';
        let card_license_plate = '';

        $('#read-sim').click(function () {
            const jsonString = '{"type":"card_info","card_uid":"12 34 56 78","name":"Nguyen Van A","cccd":"012345678901","license_plate":"29A-12345"}';
            const obj = JSON.parse(jsonString);
            //console.log(obj);
            uid = obj.card_uid;
            card_name = obj.name;
            card_cccd = obj.cccd;
            license_plate = obj.license_plate;
            time = 'time';
            $('#blur-bg').css('display', 'block');
            $('#confirmation-popup').css('display', 'block');
        });

        function checkShowInfo(inputId, uid) {
            function normalizeString(str) {
                return str.toLowerCase().replace(/\s+/g, '');
            }

            const normalizedInputId = normalizeString(inputId);
            const normalizedUid = normalizeString(uid);

            return normalizedInputId === normalizedUid;
        }

        $('#checkUidBtn').click(function () {
            $("#checkError").css('display', 'none')
            const inputId = $('#input_uid').val();
            if (checkShowInfo(inputId, uid)) {
                console.log("Chuỗi phù hợp!");
                handleShowInfo(card_name, card_cccd, card_license_plate, time);
                clearPopup();
            } else {
                console.log("Chuỗi không phù hợp!");
                $("#checkError").css('display', 'flex')
            }
        });

        function clearPopup(){
            uid = '';
            card_name = '';
            card_cccd = '';
            license_plate = '';
            time = '';
            $("#checkError").css('display', 'none')
            $('#blur-bg').css('display', 'none');
            $('#confirmation-popup').css('display', 'none');
        }

        $("#blur-bg").click(function () {
            clearPopup();
        });

        function handleShowInfo(currentName, currentCardID, currentLicense, time) {
            $('#read_name').val(currentName);
            $('#read_cccd').val(currentCardID);
            $('#read_license_plate').val(currentLicense);
            $('#read_time').val(time);
        }
        document.addEventListener("DOMContentLoaded", function () {
            if ("WebSocket" in window) {
                ws = new WebSocket('ws://' + window.location.host + ':81/');
                // ws = new WebSocket('ws://192.168.0.115:81/');
                ws.onopen = function () { };
                ws.onmessage = function (evt) {
                    const type = evt.data;
                    if (typeof type === 'string') {
                        const json = JSON.parse(evt.data);
                        //console.log("Data Read:" + JSON.stringify(json));
                        const type = json["type"];
                        if (type == "card_info") {
                            const { card_uid, name, cccd, license_plate } = json;
                            const content = `<b>Read Card</b><br>Card UID: ${card_uid}<br>Name: ${name}<br>License: ${license_plate}<br>CCCD: ${cccd}`;
                            //$('#read_name').val(name);
                            //$('#read_cccd').val(cccd);
                            //$('#read_license_plate').val(license_plate);
                            const currentDate = new Date();
                            const _time = `${currentDate.getHours()}:${currentDate.getMinutes()}:${currentDate.getSeconds()} ${currentDate.toDateString()}`;
                            uid = card_uid;
                            card_name = name;
                            card_cccd = cccd;
                            card_license_plate = license_plate;
                            time = _time;
                            $('#blur-bg').css('display', 'block');
                            $('#confirmation-popup').css('display', 'block');
                            //$('#read_time').val(_time);
                            // showArea(content, {}, false);
                        } else if (type == "add_status") {
                            const { error, reason } = json;
                            const content = `<b>Thêm thẻ</b><br>Tên: ${name}<br>License: ${license}<br>CCCD: ${cccd}<br>Key: ${authenticationKey}`;
                            showArea(content, { "err_code": error, "msg": reason });
                        } else if (type == "other") {
                            showArea("<br>Đưa thẻ cần ghi, lại gần cảm biến<br>", {}, false);
                        }
                    }
                };
                ws.onclose = function () { };
            } else {
                alert("WebSocket NOT supported by your Browser!");
            }
        });
    </script>
</body>

</html>
)HTMLHOMEPAGE";
