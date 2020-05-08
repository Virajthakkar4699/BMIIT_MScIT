(function(){/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
'use strict';var aa="function"==typeof Object.create?Object.create:function(a){function b(){}b.prototype=a;return new b},e;if("function"==typeof Object.setPrototypeOf)e=Object.setPrototypeOf;else{var g;a:{var ba={h:!0},h={};try{h.__proto__=ba;g=h.h;break a}catch(a){}g=!1}e=g?function(a,b){a.__proto__=b;if(a.__proto__!==b)throw new TypeError(a+" is not extensible");return a}:null}var k=e;
function l(a,b){a.prototype=aa(b.prototype);a.prototype.constructor=a;if(k)k(a,b);else for(var c in b)if("prototype"!=c)if(Object.defineProperties){var d=Object.getOwnPropertyDescriptor(b,c);d&&Object.defineProperty(a,c,d)}else a[c]=b[c]}var m=this||self;
function ca(a){var b=typeof a;if("object"==b)if(a){if(a instanceof Array)return"array";if(a instanceof Object)return b;var c=Object.prototype.toString.call(a);if("[object Window]"==c)return"object";if("[object Array]"==c||"number"==typeof a.length&&"undefined"!=typeof a.splice&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("splice"))return"array";if("[object Function]"==c||"undefined"!=typeof a.call&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("call"))return"function"}else return"null";
else if("function"==b&&"undefined"==typeof a.call)return"object";return b}var da=Date.now||function(){return+new Date};function n(a,b){function c(){}c.prototype=b.prototype;a.prototype=new c;a.prototype.constructor=a};var ea=Array.prototype.forEach?function(a,b){Array.prototype.forEach.call(a,b,void 0)}:function(a,b){for(var c=a.length,d="string"===typeof a?a.split(""):a,f=0;f<c;f++)f in d&&b.call(void 0,d[f],f,a)};function p(a){p[" "](a);return a}p[" "]=function(){};function q(){}var fa="function"==typeof Uint8Array;function r(a,b,c){a.b=null;b||(b=[]);a.j=void 0;a.f=-1;a.a=b;a:{if(b=a.a.length){--b;var d=a.a[b];if(!(null===d||"object"!=typeof d||Array.isArray(d)||fa&&d instanceof Uint8Array)){a.g=b-a.f;a.c=d;break a}}a.g=Number.MAX_VALUE}a.i={};if(c)for(b=0;b<c.length;b++)if(d=c[b],d<a.g)d+=a.f,a.a[d]=a.a[d]||t;else{var f=a.g+a.f;a.a[f]||(a.c=a.a[f]={});a.c[d]=a.c[d]||t}}var t=[];
function u(a,b){if(b<a.g){b+=a.f;var c=a.a[b];return c===t?a.a[b]=[]:c}if(a.c)return c=a.c[b],c===t?a.c[b]=[]:c}function ha(a){a=u(a,2);return null==a?0:a}function ia(a){a=u(a,16);a=null==a?a:!!a;return null==a?!1:a}function v(a,b,c){a.b||(a.b={});if(!a.b[c]){var d=u(a,c);d&&(a.b[c]=new b(d))}return a.b[c]}function w(a){if(a.b)for(var b in a.b){var c=a.b[b];if("array"==ca(c))for(var d=0;d<c.length;d++)c[d]&&w(c[d]);else c&&w(c)}}q.prototype.toString=function(){w(this);return this.a.toString()};function x(a){r(this,a,ka)}n(x,q);var ka=[17];function y(a){r(this,a,la)}n(y,q);var la=[27];function z(a){r(this,a,ma)}n(z,q);var ma=[8];var A=document;function B(){var a=C;try{var b;if(b=!!a&&null!=a.location.href)a:{try{p(a.foo);b=!0;break a}catch(c){}b=!1}return b}catch(c){return!1}};var D=!!window.google_async_iframe_id,C=D&&window.parent||window;var E=null;function na(a,b,c){this.label=a;this.type=b;this.value=c;this.duration=0;this.uniqueId=Math.random();this.slotId=void 0};var F=m.performance,oa=!!(F&&F.mark&&F.measure&&F.clearMarks),G=function(a){var b=!1,c;return function(){b||(c=a(),b=!0);return c}}(function(){var a;if(a=oa){var b;if(null===E){E="";try{a="";try{a=m.top.location.hash}catch(c){a=m.location.hash}a&&(E=(b=a.match(/\bdeid=([\d,]+)/))?b[1]:"")}catch(c){}}b=E;a=!!b.indexOf&&0<=b.indexOf("1337")}return a});
function H(){var a=I;this.a=[];this.c=a||m;var b=null;a&&(a.google_js_reporting_queue=a.google_js_reporting_queue||[],this.a=a.google_js_reporting_queue,b=a.google_measure_js_timing);this.b=G()||(null!=b?b:1>Math.random())}function pa(a){a&&F&&G()&&(F.clearMarks("goog_"+a.label+"_"+a.uniqueId+"_start"),F.clearMarks("goog_"+a.label+"_"+a.uniqueId+"_end"))}
H.prototype.start=function(a,b){if(!this.b)return null;var c=void 0===c?m:c;c=c.performance;(c=c&&c.now?c.now():null)||(c=(c=m.performance)&&c.now&&c.timing?Math.floor(c.now()+c.timing.navigationStart):da());a=new na(a,b,c);b="goog_"+a.label+"_"+a.uniqueId+"_start";F&&G()&&F.mark(b);return a};if(D&&!B()){var J="."+A.domain;try{for(;2<J.split(".").length&&!B();)A.domain=J=J.substr(J.indexOf(".")+1),C=window.parent}catch(a){}B()||(C=window)}var I=C,K=new H;function L(){I.google_measure_js_timing||(K.b=!1,K.a!=K.c.google_js_reporting_queue&&(G()&&ea(K.a,pa),K.a.length=0))}"number"!==typeof I.google_srt&&(I.google_srt=Math.random());if("complete"==I.document.readyState)L();else if(K.b){var qa=function(){L()},M=I;M.addEventListener&&M.addEventListener("load",qa,!1)};function ra(){};function N(a,b){a=a.getElementsByTagName("META");for(var c=0;c<a.length;++c)if(a[c].getAttribute("name")===b)return a[c].getAttribute("content");return""};function O(){var a=P;this.a=a;var b=N(a,"namespace");if(!b){b="ns-"+Math.random().toString(36).substr(2,5);a:{for(var c=a.getElementsByTagName("META"),d=0;d<c.length;++d)if("namespace"===c[d].getAttribute("name")){c[d].setAttribute("content",b);break a}c=document.createElement("META");c.setAttribute("name","namespace");c.setAttribute("content",b);a.appendChild(c)}}}O.prototype.dispatchEvent=function(a,b){a=null==b?new CustomEvent(a):new CustomEvent(a,{detail:b});this.a.dispatchEvent(a)};function Q(){this.a={}}Q.prototype.set=function(a,b){this.a[a]=b};Q.prototype.get=function(a){return this.a[a]};function R(a){this.context=a;this.a=new Q}l(R,ra);function sa(){var a=S;this.b=ta;this.a=a}function ua(){var a=T,b=va;2==ha(b)||v(v(b,y,1),x,10)&&ia(v(v(b,y,1),x,10))||(b=0,mys.engine&&(b=mys.engine.stage()),a=a.a.a,0==(b&1)&&a.addEventListener("overallStart",function(){}),a.addEventListener("browserStart",function(){}),a.addEventListener("browserReady",function(){}),a.addEventListener("browserQuiet",function(){}))};function U(a){R.call(this,a)}l(U,R);function V(){U.apply(this,arguments)}l(V,U);function W(){V.apply(this,arguments)}l(W,V);var P=document.getElementById("mys-content");if(P){var S=new O,ta=new W(S),T=new sa,wa=T.b.a,X=N(S.a,"runtime_data");if(X){var Y=JSON.parse(X),Z;for(Z in Y)wa.set(Z,Y[Z])}var xa=N(S.a,"render_config")||"[]",va=new z(xa?JSON.parse(xa):null);ua()};}).call(this);
