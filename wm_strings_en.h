/**
 * wm_strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_


#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

// strings files must include a consts file!
#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "en-US"; // i18n lang code

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='en'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[]           PROGMEM = R"rawliteral(
<script>
function toggleForm(element) {
  // Hide all other password containers
  var containers = document.getElementsByClassName('password-container');
  for (var i = 0; i < containers.length; i++) {
    containers[i].style.display = 'none';
  }
  // Show the password container next to the clicked WiFi item
  var passwordContainer = element.nextElementSibling;
  passwordContainer.style.display = 'block';
  // Focus on the password input
  var passwordInput = passwordContainer.querySelector('input[name="p"]');
  passwordInput.focus();
}

function togglePassword(checkbox) {
  var passwordInput = checkbox.parentElement.previousElementSibling;
  if (passwordInput.type === 'password') {
    passwordInput.type = 'text';
  } else {
    passwordInput.type = 'password';
  }
}
</script>
)rawliteral";

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>¡Bienvenido!</h1><br/><p>Escoge la red wifi a la que quieras conectar tu nuevo peluche</p>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configure WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configure WiFi (No scan)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Info</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Setup</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Close</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Restart</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Exit</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Erase</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Update</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[]             PROGMEM = "<div class='wifi-box'><div class='wifi-item' onclick='toggleForm(this)' data-ssid='{V}'><span>{v}</span>{qi}{qp}</div> <div class='password-container' style='display:none;'><form method='POST' action='/wifisave'> <input type='hidden' name='s' value='{v}'> <label for='p'>Password</label> <input id='p' name='p' maxlength='64' type='password' placeholder='Contraseña'> <div class='show-password'> <input type='checkbox' onclick='togglePassword(this)'><label>Mostrar contraseña</label></div><button type='submit'>Continuar</button></form></div></div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]             PROGMEM = "<div class='wifi-box'><div class='wifi-item' onclick='c(this)' data-ssid='{V}'><span>{v}</span>{qi}{qp}</div> <div class='password-container'><form method='POST' action='/wifisave'></form></div></div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'><input type='checkbox' id='showpass' onclick='f()'> <label for='showpass'>Show Password</label><br/>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST' class='refresh-form'><button name='refresh' value='1' type='submit'><svg fill='none' viewBox='0 0 24 24' stroke-width='1.5' class='wifi-icon' stroke='currentColor'><path stroke-linecap='round' stroke-linejoin='round' d='M8.288 15.038a5.25 5.25 0 0 1 7.424 0M5.106 11.856c3.807-3.808 9.98-3.808 13.788 0M1.924 8.674c5.565-5.565 14.587-5.565 20.152 0M12.53 18.22l-.53.53-.53-.53a.75.75 0 0 1 1.06 0Z'/></svg>Refresh</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Saving Credentials<br/>Trying to connect ESP to network.<br />If it fails reconnect to AP to try again</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Saved<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi config</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Update</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Back</button></form>";

const char HTTP_ERROR_PAGE[] 	   PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>¡Ups! Contraseña incorrecta</title>
    <style>
      * {
        margin: 0;
        padding: 0;
        box-sizing: border-box;
      }

      body {
        font-family: Arial, sans-serif;
        background-color: #c6ecea;
        display: flex;
        justify-content: center;
        align-items: center;
        height: 100vh;
      }

      .error-card {
        background-color: #fff;
        border-radius: 15px;
        padding: 20px;
        box-shadow: 0 5px 15px rgba(0, 0, 0, 0.2);
        max-width: 320px;
        text-align: center;
      }

      .error-card img {
        width: 100px;
        margin-bottom: 20px;
      }

      .error-card h1 {
        color: #00774f;
        font-size: 24px;
        margin-bottom: 10px;
      }

      .error-card p {
        color: #555;
        font-size: 16px;
        margin-bottom: 20px;
      }

      .retry-button {
        background-color: #00774f;
        color: #fff;
        padding: 10px 20px;
        border: none;
        border-radius: 5px;
        cursor: pointer;
        font-size: 16px;
        transition: background-color 0.3s;
      }

      @media (max-width: 768px) {
        .error-card {
          max-width: 90%;
          padding: 15px;
        }

        .error-card h1 {
          font-size: 20px;
        }

        .error-card p {
          font-size: 14px;
        }

        .retry-button {
          font-size: 14px;
          padding: 8px 16px;
        }
      }
    </style>
  </head>
  <body>
    <div class="error-card">
      <!-- Replace this with the actual image URL or SVG for the sad face -->
      <!-- For example, include an inline SVG or base64-encoded image -->
      <svg
        width="243"
        height="243"
        viewBox="0 0 243 243"
        fill="none"
      >
        <circle cx="121.666" cy="121.351" r="121.149" fill="#BCF266" />
        <g filter="url(#filter0_d_634_2501)">
          <path
            d="M153.375 69.6713C159.566 85.0188 168.492 112.602 171.332 120.48C175.195 131.186 187.737 155.852 173.59 181.159C159.443 206.466 131.43 209.382 120.158 209.062C108.886 208.742 84.1197 207.444 70.2723 182.777C56.4249 158.111 66.8325 136.432 68.4554 130.901C70.0782 125.371 75.5643 112.086 81.4384 91.2076C83.5023 83.9162 87.3831 74.1706 89.4117 69.6713C89.4117 69.6713 101.658 40.5 120.5 40C139.342 39.5 153.375 69.6713 153.375 69.6713Z"
            fill="#19282D"
          />
        </g>
        <path
          d="M150.957 73.2099C156.99 86.9391 165.158 113.348 168.068 121.44C171.684 131.452 183.397 154.483 170.167 178.135C156.937 201.788 130.777 204.509 120.246 204.207C109.715 203.904 86.5712 202.695 73.641 179.647C60.7109 156.599 70.4305 136.343 71.9476 131.186C73.4646 126.028 78.5802 113.597 84.0839 94.106C86.677 84.8939 89.5876 78.1716 91.9161 73.6367C91.9161 73.6367 103.492 47 120.246 46.5C137 46 150.957 73.2099 150.957 73.2099Z"
          fill="#5EA45D"
        />
        <path
          d="M144.396 73.3343C149.494 79.9143 159.901 113.953 163.129 122.88C166.357 131.826 176.836 152.402 165.017 173.529C153.198 194.657 129.825 197.093 120.423 196.826C111.021 196.559 90.3289 195.475 78.7747 174.881C67.2205 154.287 75.8817 136.218 77.24 131.595C78.5983 126.971 83.1671 115.874 88.0886 98.463C93.0102 81.0525 99.1137 73.601 99.1137 73.601C99.1137 73.601 108.846 55.5 120.423 54.5C132 53.5 144.396 73.3343 144.396 73.3343Z"
          fill="#E7EDB2"
        />
        <path
          d="M122.346 184.413C136.433 184.413 147.853 172.9 147.853 158.698C147.853 144.496 136.433 132.982 122.346 132.982C108.258 132.982 96.838 144.496 96.838 158.698C96.838 172.9 108.258 184.413 122.346 184.413Z"
          fill="#0E201A"
        />
        <path
          d="M121.887 179.345C134.201 179.345 144.184 169.281 144.184 156.866C144.184 144.451 134.201 134.387 121.887 134.387C109.572 134.387 99.5897 144.451 99.5897 156.866C99.5897 169.281 109.572 179.345 121.887 179.345Z"
          fill="#EDA855"
        />
        <path
          d="M121.94 135.205C121.534 135.205 121.146 135.223 120.758 135.241C130.901 135.845 138.927 144.577 138.927 155.283C138.927 166.363 130.301 175.361 119.647 175.361C109.292 175.361 100.86 166.878 100.384 156.226C100.366 156.546 100.366 156.848 100.366 157.168C100.366 169.279 110.033 179.114 121.94 179.114C133.847 179.114 143.514 169.297 143.514 157.168C143.514 145.04 133.847 135.205 121.94 135.205Z"
          fill="#B8763A"
        />
        <path
          d="M116.325 148.217C118.826 145.696 119.53 142.318 117.897 140.672C116.264 139.026 112.914 139.736 110.413 142.257C107.912 144.778 107.209 148.156 108.841 149.802C110.474 151.448 113.825 150.738 116.325 148.217Z"
          fill="#FEFBF8"
        />
        <path
          d="M109.88 157.36C110.927 156.305 110.894 154.559 109.805 153.462C108.717 152.365 106.986 152.331 105.939 153.387C104.891 154.442 104.925 156.188 106.013 157.285C107.102 158.382 108.833 158.416 109.88 157.36Z"
          fill="#FEFBF8"
        />
        <path
          d="M121.11 119.413C118.588 119.502 117.547 121.013 117.124 122.134C116.841 122.845 116.189 123.343 115.413 123.343H115.395C114.16 123.343 113.296 122.134 113.666 120.942C114.672 117.759 117.618 115.465 121.11 115.465C124.603 115.465 127.549 117.777 128.554 120.942C128.925 122.116 128.061 123.343 126.826 123.343H126.773C126.014 123.343 125.344 122.863 125.079 122.151C124.656 120.978 123.598 119.342 121.11 119.413Z"
          fill="#19282D"
        />
        <path
          d="M95.1445 124.748C98.3984 124.748 101.036 122.088 101.036 118.808C101.036 115.527 98.3984 112.868 95.1445 112.868C91.8905 112.868 89.2527 115.527 89.2527 118.808C89.2527 122.088 91.8905 124.748 95.1445 124.748Z"
          fill="#EFC1D7"
        />
        <path
          d="M146.3 125.175C149.554 125.175 152.192 122.516 152.192 119.235C152.192 115.955 149.554 113.295 146.3 113.295C143.046 113.295 140.409 115.955 140.409 119.235C140.409 122.516 143.046 125.175 146.3 125.175Z"
          fill="#EFC1D7"
        />
        <path
          d="M107.193 114.504C110.281 114.504 112.785 111.12 112.785 106.946C112.785 102.772 110.281 99.3879 107.193 99.3879C104.105 99.3879 101.601 102.772 101.601 106.946C101.601 111.12 104.105 114.504 107.193 114.504Z"
          fill="#19282D"
        />
        <path
          d="M105.129 107.107C106.016 107.107 106.734 105.952 106.734 104.528C106.734 103.104 106.016 101.949 105.129 101.949C104.243 101.949 103.524 103.104 103.524 104.528C103.524 105.952 104.243 107.107 105.129 107.107Z"
          fill="white"
        />
        <g opacity="0.6">
          <path
            d="M110.205 110.714C110.72 109.547 110.582 108.352 109.896 108.045C109.211 107.737 108.238 108.434 107.723 109.6C107.208 110.767 107.346 111.962 108.031 112.269C108.716 112.577 109.69 111.88 110.205 110.714Z"
            fill="white"
          />
        </g>
        <path
          d="M134.588 114.504C137.676 114.504 140.18 111.12 140.18 106.946C140.18 102.772 137.676 99.3879 134.588 99.3879C131.499 99.3879 128.996 102.772 128.996 106.946C128.996 111.12 131.499 114.504 134.588 114.504Z"
          fill="#19282D"
        />
        <path
          d="M132.506 107.107C133.393 107.107 134.111 105.952 134.111 104.528C134.111 103.104 133.393 101.949 132.506 101.949C131.62 101.949 130.901 103.104 130.901 104.528C130.901 105.952 131.62 107.107 132.506 107.107Z"
          fill="white"
        />
        <g opacity="0.6">
          <path
            d="M137.586 110.72C138.101 109.553 137.963 108.358 137.278 108.051C136.593 107.743 135.62 108.439 135.105 109.606C134.589 110.772 134.727 111.967 135.413 112.275C136.098 112.583 137.071 111.886 137.586 110.72Z"
            fill="white"
          />
        </g>
        <defs>
          <filter
            id="filter0_d_634_2501"
            x="59.1783"
            y="39.9939"
            width="124.977"
            height="177.09"
            filterUnits="userSpaceOnUse"
            color-interpolation-filters="sRGB"
          >
            <feFlood flood-opacity="0" result="BackgroundImageFix" />
            <feColorMatrix
              in="SourceAlpha"
              type="matrix"
              values="0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 127 0"
              result="hardAlpha"
            />
            <feOffset dy="4" />
            <feGaussianBlur stdDeviation="2" />
            <feComposite in2="hardAlpha" operator="out" />
            <feColorMatrix
              type="matrix"
              values="0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0.25 0"
            />
            <feBlend
              mode="normal"
              in2="BackgroundImageFix"
              result="effect1_dropShadow_634_2501"
            />
            <feBlend
              mode="normal"
              in="SourceGraphic"
              in2="effect1_dropShadow_634_2501"
              result="shape"
            />
          </filter>
        </defs>
      </svg>

      <h1>¡Ups! Contraseña incorrecta</h1>
      <p>
        Parece que la contraseña no es correcta. Por favor, vuelve a intentarlo
        o verifica los detalles de la red
      </p>
      <button class="retry-button" onclick="window.location.href='/wifi'">Intentar de nuevo &#x21bb;</button>
    </div>
  </body>
</html>
)rawliteral";

const char HTTP_SUCCESS_PAGE[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>¡Conexión Exitosa!</title>
    <style>
      body {
        font-family: Arial, sans-serif;
        background-color: #c6ecea;
        display: flex;
        justify-content: center;
        align-items: center;
        height: 100vh;
      }

      .success-card {
        background-color: #fff;
        border-radius: 15px;
        padding: 20px;
        box-shadow: 0 5px 15px rgba(0, 0, 0, 0.2);
        max-width: 320px;
        text-align: center;
      }

      .success-card h1 {
        color: #00774f;
        font-size: 24px;
        margin-bottom: 10px;
      }

      .success-card p {
        color: #555;
        font-size: 16px;
        margin-bottom: 20px;
      }

      @media (max-width: 768px) {
        .success-card {
          max-width: 90%;
          padding: 15px;
        }

        .success-card h1 {
          font-size: 20px;
        }

        .success-card p {
          font-size: 14px;
        }
      }
    </style>
  </head>
  <body>
    <div class="success-card">
      <!-- Success icon or image -->
      <svg
        width="100"
        height="100"
        viewBox="0 0 100 100"
        fill="none"
        xmlns="http://www.w3.org/2000/svg"
      >
        <!-- SVG content -->
      </svg>

      <h1>¡Conexión Exitosa!</h1>
      <p>
        Tu dispositivo está conectado a la red WiFi.
      </p>
      <p>
        Este portal se cerrará automáticamente en 5 segundos.
      </p>
    </div>
  </body>
</html>
)rawliteral";


const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Not connected</strong> to {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Authentication failure"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>AP not found";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Could not connect"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>No AP set</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
"*{margin: 0;padding: 0;box-sizing: border-box;}.c,body {font-family: 'Arial', sans-serif;background-color: #C6ECEA;display: flex;flex-direction: column;align-items: center;min-height: 100vh;}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
"input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:400px;width:90%;}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
"button.D{background-color:#dc3630}"
"button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
// Heading and Paragraph Styles
"h1 {font-size: 24px;color: #333;margin-top: 20px;margin-bottom: 15px;text-align: center;}"
"p {font-size: 16px;color: #666;margin-bottom: 20px;text-align: center;width: 90%;}"
// WiFi Box Style
".wifi-box {background-color: white;border-radius: 10px;padding: 20px;margin-bottom: 20px;box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1);}"
".wifi-item {background-color: #fff;padding-top: 15px;padding-bottom: 15px;border-radius: 5px;display: flex;justify-content: space-between;align-items: center;cursor: pointer;transition: 0.3s;}.wifi-item:hover {background-color: #f0f0f0;}.wifi-item span {font-size: 18px;color: #333;font-weight: bold;}"
// password container
".password-container {display: none;margin-top: 10px;width: 100%;}"
".password-container input {width: 100%;padding: 10px;background-color: #F6F6F4;border: none;border-radius: 5px;margin-bottom: 10px;font-size: 16px;}"
// show password
".show-password {display: flex;align-items: center;gap: 5px;font-size: 12px;width: auto;margin-bottom: 20px;}"
".show-password input[type='checkbox'] {width: 12px;height: 12px;margin: 0;}"
".show-password label {cursor: pointer;margin: 0;white-space: nowrap;}"
// button
"button[type='submit'] {width: 100%;padding: 10px;background-color: #00774F;color: #fff;border: none;border-radius: 5px;font-size: 18px;cursor: pointer;}"
// refresh button
".refresh-form {text-align: center;margin-bottom: 20px;}"
".refresh-form button {display: flex;align-items: center;justify-content: center;background-color: #00774F;color: #fff;border: none;border-radius: 5px;font-size: 18px;padding: 10px;cursor: pointer;}"
".refresh-form .wifi-icon {width: 24px;height: 24px;margin-right: 8px;}"
// button
"button{background-color: #00774F;cursor: pointer;box-shadow: 2px 4px 6px rgba(0, 0, 0, 0.3);}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
":disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Available pages</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Menu page.</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Parameter page</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Information page</td></tr>"
 "<tr><td><a href='/u'>/u</a></td>"
 "<td>OTA Update</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Close the captiveportal popup, config portal will remain active</td></tr>"
 "<tr><td>/exit</td>"
 "<td>Exit Config portal, config portal will close</td></tr>"
 "<tr><td>/restart</td>"
 "<td>Reboot the device</td></tr>"
 "<tr><td>/erase</td>"
 "<td>Erase WiFi configuration and reboot device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</table>"
 "<p/>Github <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Upload new firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* May not function inside captive portal, open in browser http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Update failed!</strong><Br/>Reboot device and try again</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Update successful.  </strong> <br/> Device rebooting now...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip rev</dt><dd>{1}</dd>";
  	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  	const char HTTP_INFO_aphost[]     PROGMEM = "<dt>Access point hostname</dt><dd>{1}</dd>";
    const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd>";
    const char HTTP_INFO_hall[]       PROGMEM = "<dt>Hall</dt><dd>{1}</dd>";
#else
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot version</dt><dd>{1}</dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real flash size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free heap</dt><dd>{1} bytes available</dd>";
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} mins {2} secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>Access point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[]     PROGMEM = "<dt>WiFiManager</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[]    PROGMEM = "<dt>Build date</dt><dd>{1}</dd>";

const char S_brand[]              PROGMEM = "WiFiManager";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credentials saved";
const char S_titlewifisettings[]  PROGMEM = "Settings saved";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An error occured";
const char S_notfound[]           PROGMEM = "File not found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";


// softap ssid default prefix
#ifdef ESP8266
    const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
    const char S_ssidpre[]        PROGMEM = "ESP32";
#else
    const char S_ssidpre[]        PROGMEM = "WM";
#endif

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

#endif
