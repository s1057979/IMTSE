#ifndef MAAPI_DEFS_H
#define MAAPI_DEFS_H

/** \brief A hash of the abstract representation of the API described in this file.
 * Identifiers, declarations and definitions are included in the calculation of the hash,
 * but documentation is not.
 */
#define MAIDL_HASH ((int)0xc3164193)

#ifndef DONT_WANT_MAAPI_TYPEDEFS
#ifndef _WCHAR_DEFINED
#define _WCHAR_DEFINED
#ifdef MAPIP
#ifdef __cplusplus
typedef wchar_t wchar;
#else
typedef unsigned short wchar;
typedef wchar wchar_t;
#endif	//__cplusplus
#else	//MAPIP
typedef unsigned short wchar;
#endif	//MAPIP
#endif	//_WCHAR_DEFINED

#ifndef _SYSV_TYPES_DEFINED
#define _SYSV_TYPES_DEFINED
typedef unsigned short ushort;
typedef unsigned int uint;
#endif	//_SYSV_TYPES_DEFINED

typedef char* MAString;
typedef wchar* MAWString;
typedef unsigned int MAAddress;
typedef int MAHandle;
typedef int MAExtent;
typedef unsigned char byte;
typedef unsigned long ulong;
typedef long long longlong;

#endif
/// Returns the height of an MAExtent.
#define  EXTENT_Y(e) ((short)(e))

/// Returns the width of an MAExtent.
#define  EXTENT_X(e) ((short)((e) >> 16))

/// Creates an MAExtent.
#define  EXTENT(x, y) ((MAExtent)((((int)(x)) << 16) | ((y) & 0xFFFF)))

/// The image is copied unchanged.
#define TRANS_NONE 0

/// The image is rotated clockwise by 90 degrees.
#define TRANS_ROT90 5

/// The image is rotated clockwise by 180 degrees.
#define TRANS_ROT180 3

/// The image is rotated clockwise by 270 degrees.
#define TRANS_ROT270 6

/// The image is reflected about its vertical center.
#define TRANS_MIRROR 2

/// The image is reflected about its vertical center, then rotated clockwise by 90 degrees.
#define TRANS_MIRROR_ROT90 7

/// The image is reflected about its vertical center, then rotated clockwise by 180 degrees.
#define TRANS_MIRROR_ROT180 1

/// The image is reflected about its vertical center, then rotated clockwise by 270 degrees.
#define TRANS_MIRROR_ROT270 4
/// This handle refers to the back buffer, which is initially black.
#define HANDLE_SCREEN 0

#define HANDLE_LOCAL 0
#define RES_OUT_OF_MEMORY -1
#define RES_BAD_INPUT -2
#define RES_OK 1
#define MAS_CREATE_IF_NECESSARY 1
/// Generic error.
#define STERR_GENERIC -2

/// The storage medium is full.
#define STERR_FULL -3

/// The store does not exist.
#define STERR_NONEXISTENT -5
/// Generic error.
#define CONNERR_GENERIC -2

/// The maximum number of open connections allowed has been reached.
#define CONNERR_MAX -3

/// DNS resolution error.
#define CONNERR_DNS -4

/// Internal error. Please report any occurrences.
#define CONNERR_INTERNAL -5

/** \brief The connection was closed by the remote peer.
*
* Happens when HTTP servers finish sending data.
*/
#define CONNERR_CLOSED -6

/// You attempted to write to a read-only connection.
#define CONNERR_READONLY -7

/// The OS does not trust you enough to let you open this connection.
#define CONNERR_FORBIDDEN -8

/// No operation has been started yet.
#define CONNERR_UNINITIALIZED -9

/// The Content-Length header could not be found.
#define CONNERR_CONLEN -10

/// You supplied a malformed URL.
#define CONNERR_URL -11

/// The protocol is not available.
/// If a Bluetooth function returns this, the Bluetooth chip is turned off.
#define CONNERR_UNAVAILABLE -12

/// You canceled the operation.
#define CONNERR_CANCELED -13

/// The server gave an invalid response.
#define CONNERR_PROTOCOL -14

/// The network connection could not be established.
#define CONNERR_NETWORK -15

/// The requested header could not be found.
#define CONNERR_NOHEADER -16

/// The requested object could not be found.
#define CONNERR_NOTFOUND -17

/// An error occurred during SSL negotiation.
#define CONNERR_SSL -18

/**
* If you wish to share the CONNERR codespace,
* use values below this for your own error codes.
*/
#define CONNERR_USER -1000000
#define CONNOP_READ 1
#define CONNOP_WRITE 2
#define CONNOP_CONNECT 7
#define CONNOP_FINISH 11
#define CONNOP_ACCEPT 16
/// The maximum number of open connections allowed.
#define CONN_MAX 32
#define BTADDR_LEN 6
#define CONN_FAMILY_INET4 1
#define CONN_FAMILY_BT 2
#define HTTP_GET 1
#define HTTP_POST 2
#define HTTP_HEAD 3
#define HTTP_PUT 4
#define HTTP_DELETE 5
#define MAK_UNKNOWN 0
#define MAK_FIRST 0
#define MAK_BACKSPACE 8
#define MAK_TAB 9
#define MAK_CLEAR 12
#define MAK_RETURN 13
#define MAK_PAUSE 19
#define MAK_ESCAPE 27
#define MAK_SPACE 32
#define MAK_EXCLAIM 33
#define MAK_QUOTEDBL 34
#define MAK_POUND 35
#define MAK_HASH 35
#define MAK_GRID 35
#define MAK_DOLLAR 36
#define MAK_AMPERSAND 38
#define MAK_QUOTE 39
#define MAK_LEFTPAREN 40
#define MAK_RIGHTPAREN 41
#define MAK_ASTERISK 42
#define MAK_STAR 42
#define MAK_PLUS 43
#define MAK_COMMA 44
#define MAK_MINUS 45
#define MAK_PERIOD 46
#define MAK_SLASH 47
#define MAK_0 48
#define MAK_1 49
#define MAK_2 50
#define MAK_3 51
#define MAK_4 52
#define MAK_5 53
#define MAK_6 54
#define MAK_7 55
#define MAK_8 56
#define MAK_9 57
#define MAK_COLON 58
#define MAK_SEMICOLON 59
#define MAK_LESS 60
#define MAK_EQUALS 61
#define MAK_GREATER 62
#define MAK_QUESTION 63
#define MAK_AT 64
#define MAK_LEFTBRACKET 91
#define MAK_BACKSLASH 92
#define MAK_RIGHTBRACKET 93
#define MAK_CARET 94
#define MAK_UNDERSCORE 95
#define MAK_BACKQUOTE 96
#define MAK_A 97
#define MAK_B 98
#define MAK_C 99
#define MAK_D 100
#define MAK_E 101
#define MAK_F 102
#define MAK_G 103
#define MAK_H 104
#define MAK_I 105
#define MAK_J 106
#define MAK_K 107
#define MAK_L 108
#define MAK_M 109
#define MAK_N 110
#define MAK_O 111
#define MAK_P 112
#define MAK_Q 113
#define MAK_R 114
#define MAK_S 115
#define MAK_T 116
#define MAK_U 117
#define MAK_V 118
#define MAK_W 119
#define MAK_X 120
#define MAK_Y 121
#define MAK_Z 122
#define MAK_DELETE 127
#define MAK_KP0 256
#define MAK_KP1 257
#define MAK_KP2 258
#define MAK_KP3 259
#define MAK_KP4 260
#define MAK_KP5 261
#define MAK_KP6 262
#define MAK_KP7 263
#define MAK_KP8 264
#define MAK_KP9 265
#define MAK_KP_PERIOD 266
#define MAK_KP_DIVIDE 267
#define MAK_KP_MULTIPLY 268
#define MAK_KP_MINUS 269
#define MAK_KP_PLUS 270
#define MAK_KP_ENTER 271
#define MAK_KP_EQUALS 272
#define MAK_UP 273
#define MAK_DOWN 274
#define MAK_RIGHT 275
#define MAK_LEFT 276
#define MAK_INSERT 277
#define MAK_HOME 278
#define MAK_END 279
#define MAK_PAGEUP 280
#define MAK_PAGEDOWN 281
#define MAK_FIRE 284
#define MAK_SOFTLEFT 285
#define MAK_SOFTRIGHT 286
#define MAK_PEN 291
#define MAK_BACK 292
#define MAK_MENU 293
#define MAK_RSHIFT 303
#define MAK_LSHIFT 304
#define MAK_RCTRL 305
#define MAK_LCTRL 306
#define MAK_RALT 307
#define MAK_LALT 308
#define MAK_SEARCH 309
#define MAKB_LEFT 0x00001
#define MAKB_UP 0x00002
#define MAKB_RIGHT 0x00004
#define MAKB_DOWN 0x00008
#define MAKB_FIRE 0x00010
#define MAKB_SOFTLEFT 0x00020
#define MAKB_SOFTRIGHT 0x00040
#define MAKB_0 0x00080
#define MAKB_1 0x00100
#define MAKB_2 0x00200
#define MAKB_3 0x00400
#define MAKB_4 0x00800
#define MAKB_5 0x01000
#define MAKB_6 0x02000
#define MAKB_7 0x04000
#define MAKB_8 0x08000
#define MAKB_9 0x10000
#define MAKB_ASTERISK 0x20000
#define MAKB_STAR 0x20000
#define MAKB_HASH 0x40000
#define MAKB_POUND 0x40000
#define MAKB_GRID 0x40000
#define MAKB_CLEAR 0x80000
#define EVENT_BUFFER_SIZE 256

/// In milliseconds
#define EVENT_CLOSE_TIMEOUT 2000
/**
* This event is posted when the operating system sends MoSync a command to exit.
* Causes include the OS shutting down and OS-controlled user commands.
* \see maGetEvent()
*/
#define EVENT_TYPE_CLOSE 1

#define EVENT_TYPE_KEY_PRESSED 2
#define EVENT_TYPE_KEY_RELEASED 3

/// Connection
#define EVENT_TYPE_CONN 4

/// Bluetooth discovery
#define EVENT_TYPE_BT 5

#define EVENT_TYPE_POINTER_PRESSED 8
#define EVENT_TYPE_POINTER_RELEASED 9
#define EVENT_TYPE_POINTER_DRAGGED 10

/**
 * While MoSync doesn't have focus, no key events will arrive and the screen will not be updated.
 * If the keypad is locked, no application will have focus.
 * \see maLockKeypad
 */
#define EVENT_TYPE_FOCUS_LOST 13

#define EVENT_TYPE_FOCUS_GAINED 14

/// Has MAEvent::data point to an MALocation.
#define EVENT_TYPE_LOCATION 16

/// MAEvent::state is one of the \link #MA_LPS_AVAILABLE MA_LPS \endlink constants.
#define EVENT_TYPE_LOCATION_PROVIDER 17

/** \brief The size of the screen has changed.
* Use maGetScrSize() to get the new size.
*
* If the screen is the current draw target, the clipping rectangle is removed.
* Use maSetClipRect() to reset it.
*/
#define EVENT_TYPE_SCREEN_CHANGED 21

/// Character input. Uses MAEvent::character.
#define EVENT_TYPE_CHAR 22

/** \brief The text box created by maTextBox() was just closed.
* Uses MAEvent::textboxResult and MAEvent::textboxLength.
*/
#define EVENT_TYPE_TEXTBOX 23

/** \brief The home screen became visible.
 * Currently implemented only on Android.
 * \see maHomeScreenEventsOn()
 */
#define EVENT_TYPE_HOMESCREEN_SHOWN 24

/** \brief The home screen was hidden because an
 * application came to front.
 * Currently implemented only on Android.
 * \see maHomeScreenEventsOn()
 */
#define EVENT_TYPE_HOMESCREEN_HIDDEN 25

/** \brief The screen was turned on (the device
 * went out of sleep state).
 * Currently implemented only on Android.
 * \see maScreenActivateEventsOn()
 */
#define EVENT_TYPE_SCREEN_STATE_ON 26

/** \brief The screen was turned off (the device
 * went into sleep state).
 * Currently implemented only on Android.
 * \see maScreenActivateEventsOn()
 */
#define EVENT_TYPE_SCREEN_STATE_OFF 27

/**
* \brief An event sent from a native widget.
* \par The application can use the MAEvent.data field to access
* widget event data, which is of type MAWidgetEventData.
* For example: \n
* \code MAWidgetEventData* widgetEventData = (MAWidgetEventData*) event.data; \endcode
* \see MAWidgetEventData
*/
#define EVENT_TYPE_WIDGET 28

/** \brief The bluetooth chip was turned off.
* Bluetooth functions will return #CONNERR_UNAVAILABLE.
* Currently implemented only on Android.
*/
#define EVENT_TYPE_BLUETOOTH_TURNED_OFF 29

/** \brief The bluetooth chip was turned on.
* Bluetooth functions will now work normally again.
* Currently implemented only on Android.
*/
#define EVENT_TYPE_BLUETOOTH_TURNED_ON 30

/**
* \brief The ImagePicker dialog was dismissed either by Cancel, either by OK.
*/
#define EVENT_TYPE_IMAGE_PICKER 31

/** \brief SMS result message.
* The field status contains one of the
* This event is sent on Android and iOS.
*/
#define EVENT_TYPE_SMS 32

/**
* \brief Provides data from active sensors.
* \see MAEvent::sensor
* \see maSensorStart()
*/
#define EVENT_TYPE_SENSOR 33

/**
* \bried The maAlert message box was dismissed by one of the available buttons.
* See #EVENT_TYPE_ALERT for the event.
*/
#define EVENT_TYPE_ALERT 34

/** \brief A new NFC tag was received
* A new tag has been received, use maGetNextTag to
* retreive it.
*/
#define EVENT_TYPE_NFC_TAG_RECEIVED 35

/** \brief New tag data was read
* An asynchronous NFC tag read operation was
* completed.
*/
#define EVENT_TYPE_NFC_TAG_DATA_READ 36

/** \brief New tag data was written
* An asynchronous NFC tag write operation was
* completed.
*/
#define EVENT_TYPE_NFC_TAG_DATA_WRITTEN 37

/** \brief A batch operation was performed
*/
#define EVENT_TYPE_NFC_BATCH_OP 38

/** \brief Tag authentication was performed
* An asynchronous NFC tag authentication read was
* completed.
*/
#define EVENT_TYPE_NFC_TAG_AUTH_COMPLETE 39

/**
* \brief Tag was made read only
*  An asynchronous NFC tag read only operation was completed.
*/
#define EVENT_TYPE_NFC_TAG_READ_ONLY 40

/**
* Send by maOptionsBox dialog when one of the option buttons is clicked.
*/
#define EVENT_TYPE_OPTIONS_BOX_BUTTON_CLICKED 41
/// The MoSync Reference Environment, also known as the Emulator.
#define RUNTIME_MORE 1

/// Java ME
#define RUNTIME_JAVA 2

/// Symbian
#define RUNTIME_SYMBIAN 3

/// Windows CE, also known as Windows Mobile.
#define RUNTIME_WINCE 4
/// Caused by a MoSync Panic. MAPanicReport::code is the panic code.
#define REPORT_PANIC 1

/// Caused by a native exception. MAPanicReport::string describes the exception.
#define REPORT_EXCEPTION 2

/// Caused by a platform-specific error. MAPanicReport::code is valid.
#define REPORT_PLATFORM_CODE 3

/// Caused by a call to maPanic(). MAPanicReport::code and MAPanicReport::string are the
/// parameters from the call.
#define REPORT_USER_PANIC 4

/// Caused by the Close event timeout. Neither code or string are valid.
#define REPORT_TIMEOUT 5
#define FONT_TYPE_SERIF 0
#define FONT_TYPE_SANS_SERIF 1
#define FONT_TYPE_MONOSPACE 2
#define FONT_STYLE_NORMAL 0
#define FONT_STYLE_BOLD 1
#define FONT_STYLE_ITALIC 2
/**
* The available result codes for fonts.
*/
/**
* \brief Indicates that the call to a font syscall was successful.
*/
#define RES_FONT_OK 1

/**
* \brief Indicates that an invalid font handle was passed.
*/
#define RES_FONT_INVALID_HANDLE -1

/**
* \brief Indicates that the index was off the list size.
*/
#define RES_FONT_INDEX_OUT_OF_BOUNDS -2

/**
* \brief Indicates that a default font with that combination does not exist.
*/
#define RES_FONT_NO_TYPE_STYLE_COMBINATION -3

/**
* \brief Indicates that there is no font with that name on the device.
*/
#define RES_FONT_NAME_NONEXISTENT -4

/**
* \brief Indicates that maFontGetCount() was not called first.
*/
#define RES_FONT_LIST_NOT_INITIALIZED -5

/**
* \brief Indicates that the buffer is not big enough to store the font name.
*/
#define RES_FONT_INSUFFICIENT_BUFFER -6

/**
* \brief Indicates that an invalid size was passed.
*/
#define RES_FONT_INVALID_SIZE -7

/**
* \brief Indicates that the font cannot be deleted because it is in use.
*  maFontDelete(handle)  fails with this return code.
*/
#define RES_FONT_DELETE_DENIED -8
#define MA_LOC_NONE 1
#define MA_LOC_INVALID 2
#define MA_LOC_UNQUALIFIED 3
#define MA_LOC_QUALIFIED 4
/**
* Availability status code: the location provider is available.
*/
#define MA_LPS_AVAILABLE 1

/**
* Availability status code: the location provider is temporarily unavailable.
* Temporary unavailability means that the method is unavailable due to reasons
* that can be expected to possibly change in the future and the provider to
* become available. An example is not being able to receive the signal because
* the signal used by the location method is currently being obstructed,
* e.g. when deep inside a building for satellite based methods.
* However, a very short transient obstruction of the signal should not cause
* the provider to toggle quickly between TEMPORARILY_UNAVAILABLE and AVAILABLE.
*/
#define MA_LPS_TEMPORARILY_UNAVAILABLE 2

/**
* Availability status code: the location provider is out of service.
* Being out of service means that the method is unavailable and the implementation
* is not able to expect that this situation would change in the near future.
* An example is when using a location method implemented in an external device and
* the external device is detached.
*/
#define MA_LPS_OUT_OF_SERVICE 3
#define MA_ACCESS_READ 1
#define MA_ACCESS_READ_WRITE 3
/// Beginning of file.
#define MA_SEEK_SET 0

/// Current position.
#define MA_SEEK_CUR 1

/// End of file.
#define MA_SEEK_END 2
/// Don't sort the files.
#define MA_FL_SORT_NONE 0

/// Sort the files by date. See maFileDate().
#define MA_FL_SORT_DATE 1

/// Sort the files by name. Case-sensitive?
#define MA_FL_SORT_NAME 2

/// Sort the files by size. See maFileSize().
#define MA_FL_SORT_SIZE 3
/// Oldest / smallest / A first.
#define MA_FL_ORDER_ASCENDING 0x10000

/// Newest / biggest / Z first.
#define MA_FL_ORDER_DESCENDING 0x20000
#define MA_FERR_GENERIC -2
#define MA_FERR_NOTFOUND -3
#define MA_FERR_FORBIDDEN -4
#define MA_FERR_RENAME_FILESYSTEM -5
#define MA_FERR_RENAME_DIRECTORY -6
#define MA_FERR_WRONG_TYPE -7

/// The sorting method requested is unsupported on the current platform.
#define MA_FERR_SORTING_UNSUPPORTED -8
/**
* Values for the status field in the #EVENT_TYPE_SMS event.
* This event is sent on Android and iOS.
*/
/// The SMS was sent.
#define MA_SMS_RESULT_SENT 1

/// The SMS was NOT sent.
#define MA_SMS_RESULT_NOT_SENT 2

/// The SMS was delivered.
#define MA_SMS_RESULT_DELIVERED 3

/// The SMS was NOT delivered.
#define MA_SMS_RESULT_NOT_DELIVERED 4
/**
* @brief A constant that represents the flash being on.
*/
/** @ingroup CameraAPI */
#define MA_CAMERA_CONST_BACK_CAMERA 0

/**
* @brief A constant that represents the flash being in the automatic mode.
*/
/** @ingroup CameraAPI */
#define MA_CAMERA_CONST_FRONT_CAMERA 1
/**
* @brief A constant that represents successful camera operation.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_OK 1

/**
* @brief A constant that represents a failed camera operation.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_FAILED -2

/**
* @brief A constant that represents a camera failing to start.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_NOT_STARTED -3

/**
* @brief A constant that represents a property not supported by the device.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_PROPERTY_NOTSUPPORTED -4

/**
* @brief A constant that represents an invalid value for that property.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_INVALID_PROPERTY_VALUE -5

/**
* @brief A constant that represents a property value not supported by the device.
*/
/** @ingroup CameraResultCodes */
#define MA_CAMERA_RES_VALUE_NOTSUPPORTED -6
/**
* @brief A constant that represents the flash being on.
*/
/** @ingroup FlashModes */
#define MA_CAMERA_FLASH_ON "on"

/**
* @brief A constant that represents the flash being in the automatic mode.
*/
/** @ingroup FlashModes */
#define MA_CAMERA_FLASH_AUTO "auto"

/**
* @brief A constant that represents the flash being off.
*/
/** @ingroup FlashModes */
#define MA_CAMERA_FLASH_OFF "off"

/**
* @brief A constant that represents the flash being in the torch mode.
*/
/** @ingroup FlashModes */
#define MA_CAMERA_FLASH_TORCH "torch"
/**
* @brief A constant that represents the focus mode being automatic.
*/
/** @ingroup FocusModes */
#define MA_CAMERA_FOCUS_AUTO "auto"

/**
* @brief A constant that turns the camera to focus to infinity.
*/
/** @ingroup FocusModes */
#define MA_CAMERA_FOCUS_INFINITY "infinity"

/**
* @brief A constant that turns the camera to macro mode.
*/
/** @ingroup FocusModes */
#define MA_CAMERA_FOCUS_MACRO "macro"

/**
* @brief A constant that sets the camera to fixed focus mode.
*/
/** @ingroup FocusModes */
#define MA_CAMERA_FOCUS_FIXED "fixed"
/**
* @brief A constant that represents JPEG image format.
*/
/** @ingroup ImageFormat */
#define MA_CAMERA_IMAGE_JPEG "jpeg"

/**
* @brief A constant that represents RAW image format.
*/
/** @ingroup ImageFormat */
#define MA_CAMERA_IMAGE_RAW "raw"
/**
* @brief Sets the flash mode for the camera.
*
* @validvalue can be one of the #MA_CAMERA_FLASH_ON, #MA_CAMERA_FLASH_OFF, #MA_CAMERA_FLASH_AUTO, #MA_CAMERA_FLASH_TORCH constants
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_FLASH_MODE, MA_CAMERA_FLASH_AUTO);
* \endcode
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_FLASH_MODE "flash-mode"

/**
* @brief Sets the focus mode for the camera.
*
* @validvalue can be one of the #MA_CAMERA_FOCUS_AUTO, #MA_CAMERA_FOCUS_INFINITY, #MA_CAMERA_FOCUS_MACRO, #MA_CAMERA_FOCUS_FIXED constants
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_FOCUS_MODE, MA_CAMERA_FOCUS_AUTO);
* \endcode
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_FOCUS_MODE "focus-mode"

/**
* @brief Sets the image format for the camera.
*
* @validvalue can be one of the #MA_CAMERA_IMAGE_JPEG, #MA_CAMERA_IMAGE_RAW constants
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_IMAGE_FORMAT, MA_CAMERA_IMAGE_JPEG);
* \endcode
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_IMAGE_FORMAT "image-format"

/**
* @brief Sets the zoom level for the camera.
*
* @validvalue an int string that can be between 0 and #MA_CAMERA_MAX_ZOOM
*
* @par Example
* \code
*	maCameraSetProperty(MAW_CAMERA_ZOOM, "1");
* \endcode
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_ZOOM "zoom"

/**
* @brief Provides the information about the maximum supported zoom level on the device.
*
* @getonly
*
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_MAX_ZOOM "max-zoom"

/**
* @brief Indicates that if the device supports zoom or not.
*
* @validvalue the returned value is "true" for support and "false" for lack of support.
*
* @getonly
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_ZOOM_SUPPORTED "zoom-supported"

/**
* @brief Indicates that if the device has a flash or not.
*
* @validvalue the returned value is "true" for support and "false" for lack of support.
*
* @getonly
*/
/** @ingroup CameraProperties */
#define MA_CAMERA_FLASH_SUPPORTED "flash-supported"
/// The user is allowed to enter any text, including line breaks.
#define MA_TB_TYPE_ANY 0

/// The user is allowed to enter an e-mail address.
#define MA_TB_TYPE_EMAILADDR 1

/// The user is allowed to enter an integer value.
#define MA_TB_TYPE_NUMERIC 2

/// The user is allowed to enter a phone number.
#define MA_TB_TYPE_PHONENUMBER 3

/// The user is allowed to enter a URL.
#define MA_TB_TYPE_URL 4

/// The user is allowed to enter a real number value.
/// This extends #MA_TB_TYPE_NUMERIC by allowing a decimal point.
#define MA_TB_TYPE_DECIMAL 5

/** \brief The user is allowed to enter any text, except for line breaks.
* Unavailable on some platforms.
* In that case, maTextBox() will return #MA_TB_RES_TYPE_UNAVAILABLE.
* You can use #MA_TB_TYPE_ANY instead.
*/
#define MA_TB_TYPE_SINGLE_LINE 100

/** Use this to separate types from flags in the \a constraints parameter.
* This is not a valid type value.
*/
#define MA_TB_TYPE_MASK 0xFFFF
/// The user chose OK.
#define MA_TB_RES_OK 1

/// The user chose Cancel.
#define MA_TB_RES_CANCEL 2

/// The specified type is unavailable on this platform.
#define MA_TB_RES_TYPE_UNAVAILABLE -3
/// Indicates that the text entered is confidential data that should be
/// obscured whenever possible.
/// This implies #MA_TB_FLAG_SENSITIVE.
#define MA_TB_FLAG_PASSWORD 0x10000

/// Indicates that editing is disallowed.
#define MA_TB_FLAG_UNEDITABLE 0x20000

/// Indicates that the text entered is sensitive data that the implementation
/// must never store into a dictionary or table for use in predictive, auto-completing,
/// or other accelerated input schemes. A credit card number is an example of sensitive data.
#define MA_TB_FLAG_SENSITIVE 0x40000

/// Indicates that the text entered does not consist of words that are likely
/// to be found in dictionaries typically used by predictive input schemes.
#define MA_TB_FLAG_NON_PREDICTIVE 0x80000

/// This flag is a hint to the implementation that during text editing,
/// the initial letter of each word should be capitalized.
#define MA_TB_FLAG_INITIAL_CAPS_WORD 0x100000

/// This flag is a hint to the implementation that during text editing,
/// the initial letter of each sentence should be capitalized.
#define MA_TB_FLAG_INITIAL_CAPS_SENTENCE 0x200000
/// A persistent notification that will launch the
/// application when selected.
#define NOTIFICATION_TYPE_APPLICATION_LAUNCHER 1
/// Landscape screen orientation.
#define SCREEN_ORIENTATION_LANDSCAPE 1

/// Portrait screen orientation.
#define SCREEN_ORIENTATION_PORTRAIT 2

/// Screen orientation is based on device sensor.
#define SCREEN_ORIENTATION_DYNAMIC 3
/** @ingroup SensorTypes */
#define SENSOR_TYPE_ACCELEROMETER 1
/** @ingroup SensorTypes */
#define SENSOR_TYPE_MAGNETIC_FIELD 2
/** @ingroup SensorTypes */
#define SENSOR_TYPE_ORIENTATION 3
/** @ingroup SensorTypes */
#define SENSOR_TYPE_GYROSCOPE 4
/** @ingroup SensorTypes */
#define SENSOR_TYPE_PROXIMITY 5
/** @ingroup SensorConsts */
#define SENSOR_RATE_FASTEST 0
/** @ingroup SensorConsts */
#define SENSOR_RATE_GAME -1
/** @ingroup SensorConsts */
#define SENSOR_RATE_NORMAL -2
/** @ingroup SensorConsts */
#define SENSOR_RATE_UI -3
/** @ingroup SensorConsts */
#define SENSOR_ERROR_NONE 0
/** @ingroup SensorConsts */
#define SENSOR_ERROR_NOT_AVAILABLE -1
/** @ingroup SensorConsts */
#define SENSOR_ERROR_INTERVAL_NOT_SET -2
/** @ingroup SensorConsts */
#define SENSOR_ERROR_ALREADY_ENABLED -3
/** @ingroup SensorConsts */
#define SENSOR_ERROR_NOT_ENABLED -4
/** @ingroup SensorConsts */
#define SENSOR_ERROR_CANNOT_DISABLE -5
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_UNKNOWN 0
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_PORTRAIT 1
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_PORTRAIT_UPSIDE_DOWN 2
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_LANDSCAPE_LEFT 3
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_LANDSCAPE_RIGHT 4
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_FACE_UP 5
/** @ingroup SensorConsts */
#define UIDEVICE_ORIENTATION_FACE_DOWN 6
/** @ingroup SensorConsts */
#define SENSOR_PROXIMITY_VALUE_FAR 0
/** @ingroup SensorConsts */
#define SENSOR_PROXIMITY_VALUE_NEAR 1
/**
* A constant indicating there is no NFC support on the device.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NOT_AVAILABLE -1

/**
* A constant indicating NFC is not enabled on the device. (But there is hardware support).
*/
/** @ingroup NFCAPI */
#define MA_NFC_NOT_ENABLED -2

/**
* A constant indicating an invalid tag type.
*/
/** @ingroup NFCAPI */
#define MA_NFC_INVALID_TAG_TYPE -2

/**
* An error code if tag connection is lost.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_CONNECTION_LOST -3

/**
* An error code if trying to perform I/O on an unconnected
* tag.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_NOT_CONNECTED -4

/**
* An error code used by maNFCWriteNDEF if maNFCWriteNDEF was
* performed on an NDEF_FORMATTABLE tag and failed.
*/
/** @ingroup NFCAPI */
#define MA_NFC_FORMAT_FAILED -5

/**
* An error code if some general I/O error occurred,
* other than the special case of tag connection being lost.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_IO_ERROR -127
/**
* Represents an NDEF (NFC Data Exchange Format) tag.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_NDEF 1

/**
* Represents a Mifare Classic tag.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_MIFARE_CL 2

/**
* Represents a Mifare Ultralight tag.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_MIFARE_UL 3

/**
* Represents an NfcA tag (ISO 14443-3A).
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_NFC_A 4

/**
* Represents an NfcB tag (ISO 14443-3B).
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_NFC_B 5

/**
* Represents an ISO-DEP tag (ISO 14443-4).
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_ISO_DEP 6

/**
* Represents an 'abstract' tag that can
* accept requests for formatting it into
* an NDEF tag.
*/
/** @ingroup NFCAPI */
#define MA_NFC_TAG_TYPE_NDEF_FORMATTABLE 128
/**
* Indicates the NDEF message is empty.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_EMPTY 0

/**
* Indicates the NDEF message is of a 'well-known' type;
* it may be further identified using the MA_NFC_NDEF_RTD_*
* constants.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_WELL_KNOWN 1

/**
* Indicates the NDEF message contains mime media;
* use maNFCGetType() to get the mime type.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_MIME_MEDIA 2

/**
* Indicates the NDEF message contains an absolute URI,
* the type conforming to RFC 3986.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_ABSOLUTE_URI 3

/**
* Indicates the type of the NDEF message being 'external'.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_EXTERNAL_TYPE 4

/**
* Indicates the contents of the NDEF message to be of
* an unknown type. The type of the NDEF message should
* be empty.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_UNKNOWN 5

/**
* Constant for chunked NDEF messages.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_UNCHANGED 6

/**
* Reserved constant.
*/
/** @ingroup NFCAPI */
#define MA_NFC_NDEF_TNF_RESERVED 7
/**
* The A key for MiFare Classic authentication
*/
/** @ingroup NFCAPI */
#define MA_NFC_MIFARE_KEY_A 1

/**
* The B key for MiFare Classic authentication
*/
/** @ingroup NFCAPI */
#define MA_NFC_MIFARE_KEY_B 2
#define IOCTL_UNAVAILABLE -1
/**
 * \brief A structure representing a two-dimensional point, with coordinates 'x' and 'y'.
 */
typedef struct MAPoint2d {
	int x;
	int y;
} MAPoint2d;
typedef struct MAPoint2dNative {
	int x;
	int y;
} MAPoint2dNative;

/**
 * \brief A structure representing a rectangle.
 *
 * The x and y coordinate of the top-left corner are defined by 'left' and 'top'.
 * The dimensions of the rectangle are defined by 'width' and 'height'.
 */
typedef struct MARect {
	int left;
	int top;
	int width;
	int height;
} MARect;
typedef struct MARectNative {
	int left;
	int top;
	int width;
	int height;
} MARectNative;

/**
* \brief Parameters for the maCopyData() function.
*/
typedef struct MACopyData {
	MAHandle dst;
	int dstOffset;
	MAHandle src;
	int srcOffset;
	int size;
} MACopyData;
typedef struct MACopyDataNative {
	MAHandle dst;
	int dstOffset;
	MAHandle src;
	int srcOffset;
	int size;
} MACopyDataNative;

/**
* \brief An address for the TCP/IPv4 protocol.
*/
typedef struct MAConnAddrInet4 {
	int addr;
	int port;
} MAConnAddrInet4;
typedef struct MAConnAddrInet4Native {
	int addr;
	int port;
} MAConnAddrInet4Native;

/**
* \brief A Bluetooth device address.
*/
typedef struct MABtAddr {
	byte a[BTADDR_LEN];
} MABtAddr;
typedef struct MABtAddrNative {
	byte a[BTADDR_LEN];
} MABtAddrNative;

/**
* \brief An address for the Bluetooth Serial Port protocol.
*/
typedef struct MAConnAddrBt {
	int port;
	MABtAddr addr;
} MAConnAddrBt;
typedef struct MAConnAddrBtNative {
	int port;
	MABtAddr addr;
} MAConnAddrBtNative;

/**
* \brief A connection address.
*/
typedef struct MAConnAddr {
	/// One of the CONN_FAMILY constants
	int family;
	union {

		MAConnAddrInet4 inet4;

		MAConnAddrBt bt;
	};
} MAConnAddr;
typedef struct MAConnAddrNative {
	/// One of the CONN_FAMILY constants
	int family;
	union {

		MAConnAddrInet4 inet4;

		MAConnAddrBt bt;
	};
} MAConnAddrNative;

/**
* \brief Data for a connection event, including an indicator or success or failure.
*/
typedef struct MAConnEventData {
	/// The handle to the connection associated with the event.
	MAHandle handle;

	/// One of the \link #CONNOP_READ CONNOP \endlink constants.
	int opType;

	/// A success value \> 0 or a \link #CONNERR_GENERIC CONNERR \endlink code.
	int result;
} MAConnEventData;
typedef struct MAConnEventDataNative {
	/// The handle to the connection associated with the event.
	MAHandle handle;

	/// One of the \link #CONNOP_READ CONNOP \endlink constants.
	int opType;

	/// A success value \> 0 or a \link #CONNERR_GENERIC CONNERR \endlink code.
	int result;
} MAConnEventDataNative;

/**
* \brief A structure containing the sensor type and the data sent to the event.
*/
typedef struct MASensor {
	int type;
	float values[3];
} MASensor;
typedef struct MASensorNative {
	int type;
	float values[3];
} MASensorNative;

/**
* \brief An event containing the result of an NFC asynchronous operation
*/
typedef struct MANFCEventData {
	/// The handle this event pertains to.
	MAHandle handle;

	/// The result of the asynchronous operation, usually a length if >= 0,
	/// or an error code of < 0.
	int result;

	/// The destination of any read or write operation. Could be a memory
	/// address, a block number, or some other value depending on the operation.
	int dstId;
} MANFCEventData;
typedef struct MANFCEventDataNative {
	/// The handle this event pertains to.
	MAHandle handle;

	/// The result of the asynchronous operation, usually a length if >= 0,
	/// or an error code of < 0.
	int result;

	/// The destination of any read or write operation. Could be a memory
	/// address, a block number, or some other value depending on the operation.
	int dstId;
} MANFCEventDataNative;

#ifdef SYMBIAN
typedef struct _AS00001 {
	/**
	* In KEY events, this will be one of the \link #MAK_UNKNOWN MAK \endlink constants.
	*/
	int key;

	/**
	* In KEY events, this will be the native keycode.
	*/
	int nativeKey;
} _AS00001;
typedef struct _AS00001Native {
	/**
	* In KEY events, this will be one of the \link #MAK_UNKNOWN MAK \endlink constants.
	*/
	int key;

	/**
	* In KEY events, this will be the native keycode.
	*/
	int nativeKey;
} _AS00001Native;
#endif

#ifdef SYMBIAN
typedef struct _AS00002 {
	/**
	* In POINTER events, this will be the location of the pointer.
	*/
	MAPoint2d point;

	/**
	* In POINTER events, this will be the finger triggering the event.
	*/
	int touchId;
} _AS00002;
typedef struct _AS00002Native {
	/**
	* In POINTER events, this will be the location of the pointer.
	*/
	MAPoint2d point;

	/**
	* In POINTER events, this will be the finger triggering the event.
	*/
	int touchId;
} _AS00002Native;
#endif

#ifdef SYMBIAN
typedef struct _AS00003 {
	/**
	* One of the \link #MA_TB_RES_OK MA_TB_RES \endlink codes.
	*/
	int textboxResult;

	/**
	* The length, in characters, of the finished text.
	* Does not include the terminating zero.
	*/
	int textboxLength;
} _AS00003;
typedef struct _AS00003Native {
	/**
	* One of the \link #MA_TB_RES_OK MA_TB_RES \endlink codes.
	*/
	int textboxResult;

	/**
	* The length, in characters, of the finished text.
	* Does not include the terminating zero.
	*/
	int textboxLength;
} _AS00003Native;
#endif

#ifdef SYMBIAN
typedef struct _AS00004 {
	/**
	    * #EVENT_TYPE_IMAGE_PICKER events, this will be 0 if canceled or 1 if Ok was pressed.
	    */
	int imagePickerState;

	/**
	* #EVENT_TYPE_IMAGE_PICKER event, contains the new handle to the selected image.
	*/
	MAHandle imagePickerItem;
} _AS00004;
typedef struct _AS00004Native {
	/**
	    * #EVENT_TYPE_IMAGE_PICKER events, this will be 0 if canceled or 1 if Ok was pressed.
	    */
	int imagePickerState;

	/**
	* #EVENT_TYPE_IMAGE_PICKER event, contains the new handle to the selected image.
	*/
	MAHandle imagePickerItem;
} _AS00004Native;
#endif

/**
* \brief An event; a message indicating that something has happened, e.g. that a key has been pressed.
*/
typedef struct MAEvent {
	/**
	* One of the \link #EVENT_TYPE_CLOSE EVENT_TYPE \endlink constants.
	*/
	int type;
	union {

#ifdef SYMBIAN
		_AS00001 ked;
#else
		struct {
			/**
			* In KEY events, this will be one of the \link #MAK_UNKNOWN MAK \endlink constants.
			*/
			int key;

			/**
			* In KEY events, this will be the native keycode.
			*/
			int nativeKey;
		};
#endif

		/**
		* In CHAR events, this is the Unicode character that was received.
		*/
		uint character;

#ifdef SYMBIAN
		_AS00002 pointer;
#else
		struct {
			/**
			* In POINTER events, this will be the location of the pointer.
			*/
			MAPoint2d point;

			/**
			* In POINTER events, this will be the finger triggering the event.
			*/
			int touchId;
		};
#endif

		/**
		* In \link #EVENT_TYPE_BT BT \endlink events, this will be a value \>= 0 or
		* one of the \link #CONNERR_GENERIC CONNERR \endlink constants.
		*/
		int state;

		/**
		* Valid only in CONN events.
		*/
		MAConnEventData conn;

#ifdef SYMBIAN
		_AS00003 textbox;
#else
		struct {
			/**
			* One of the \link #MA_TB_RES_OK MA_TB_RES \endlink codes.
			*/
			int textboxResult;

			/**
			* The length, in characters, of the finished text.
			* Does not include the terminating zero.
			*/
			int textboxLength;
		};
#endif

#ifdef SYMBIAN
		_AS00004 imagePicker;
#else
		struct {
			/**
			    * #EVENT_TYPE_IMAGE_PICKER events, this will be 0 if canceled or 1 if Ok was pressed.
			    */
			int imagePickerState;

			/**
			* #EVENT_TYPE_IMAGE_PICKER event, contains the new handle to the selected image.
			*/
			MAHandle imagePickerItem;
		};
#endif

		/**
		* #EVENT_TYPE_OPTIONS_BOX_BUTTON_CLICKED event, contains the index of the selected option.
		*/
		int optionsBoxButtonIndex;

		/**
		* #EVENT_TYPE_ALERT event. The index of the selected button.
		* If button1 is pressed, the value is 1.
		* If button2 is pressed, the value is 2.
		* If button3 is pressed, the value is 3.
		*/
		int alertButtonIndex;

		/**
		* In #EVENT_TYPE_SMS events, this will be one of the
		* @link #MA_SMS_RESULT_SENT MA_SMS_RESULT_* @endlink constants.
		*/
		int status;

		/**
		* Valid in \link #EVENT_TYPE_SENSOR SENSOR \endlink events.
		*/
		MASensor sensor;

		/**
		* NFC event data
		*/
		MANFCEventData nfc;

		/**
		* Used by custom events. See invididual event descriptions.
		*/
		MAAddress data;
	};
} MAEvent;
typedef struct MAEventNative {
	/**
	* One of the \link #EVENT_TYPE_CLOSE EVENT_TYPE \endlink constants.
	*/
	int type;
	union {

#ifdef SYMBIAN
		_AS00001 ked;
#else
		struct {
			/**
			* In KEY events, this will be one of the \link #MAK_UNKNOWN MAK \endlink constants.
			*/
			int key;

			/**
			* In KEY events, this will be the native keycode.
			*/
			int nativeKey;
		};
#endif

		/**
		* In CHAR events, this is the Unicode character that was received.
		*/
		uint character;

#ifdef SYMBIAN
		_AS00002 pointer;
#else
		struct {
			/**
			* In POINTER events, this will be the location of the pointer.
			*/
			MAPoint2d point;

			/**
			* In POINTER events, this will be the finger triggering the event.
			*/
			int touchId;
		};
#endif

		/**
		* In \link #EVENT_TYPE_BT BT \endlink events, this will be a value \>= 0 or
		* one of the \link #CONNERR_GENERIC CONNERR \endlink constants.
		*/
		int state;

		/**
		* Valid only in CONN events.
		*/
		MAConnEventData conn;

#ifdef SYMBIAN
		_AS00003 textbox;
#else
		struct {
			/**
			* One of the \link #MA_TB_RES_OK MA_TB_RES \endlink codes.
			*/
			int textboxResult;

			/**
			* The length, in characters, of the finished text.
			* Does not include the terminating zero.
			*/
			int textboxLength;
		};
#endif

#ifdef SYMBIAN
		_AS00004 imagePicker;
#else
		struct {
			/**
			    * #EVENT_TYPE_IMAGE_PICKER events, this will be 0 if canceled or 1 if Ok was pressed.
			    */
			int imagePickerState;

			/**
			* #EVENT_TYPE_IMAGE_PICKER event, contains the new handle to the selected image.
			*/
			MAHandle imagePickerItem;
		};
#endif

		/**
		* #EVENT_TYPE_OPTIONS_BOX_BUTTON_CLICKED event, contains the index of the selected option.
		*/
		int optionsBoxButtonIndex;

		/**
		* #EVENT_TYPE_ALERT event. The index of the selected button.
		* If button1 is pressed, the value is 1.
		* If button2 is pressed, the value is 2.
		* If button3 is pressed, the value is 3.
		*/
		int alertButtonIndex;

		/**
		* In #EVENT_TYPE_SMS events, this will be one of the
		* @link #MA_SMS_RESULT_SENT MA_SMS_RESULT_* @endlink constants.
		*/
		int status;

		/**
		* Valid in \link #EVENT_TYPE_SENSOR SENSOR \endlink events.
		*/
		MASensor sensor;

		/**
		* NFC event data
		*/
		MANFCEventData nfc;

		/**
		* Used by custom events. See invididual event descriptions.
		*/
		void* data;
	};
} MAEventNative;

/**
* \brief A MoSync Panic or other unrecoverable error.
*
* In MoSync Debug builds, when such an error occurs, the runtime writes
* an instance of this structure to a Store named "panic.report".
*
* The length of that instance may be greater than sizeof(MAPanicReport),
* because of the variable-length string that may appear at its end.
* The member \a string can, then, be longer than the one byte that is declared.
*
* To properly read an instance of this struct from a store, you should allocate a
* chunk of memory whose size is equal to the size of the store, then read the entire store
* into that chunk of memory. Then you should make a pointer of type MAPanicReport and point it
* to the chunk. Then you can read normally, using that pointer.
*
* \see maOpenStore()
* \see maPanic()
* \see malloc()
*/
typedef struct MAPanicReport {
	/// The type of MoSync runtime that wrote the report. A \link #RUNTIME_MORE RUNTIME \endlink constant.
	int runtimeId;

	/**
	* The type report. Specifies whether the members \a code and \a string are valid.
	* A \link #REPORT_PANIC REPORT \endlink constant.
	*/
	int reportType;

	/// The time the report was generated. The format is unix time. \see maTime()
	int time;

	/**
	* The value of the MoSync instruction pointer at the time the report was generated.
	* \< 0 if the MoSync core was inaccessible.
	*/
	int ip;

	int code;

	char string[1];
} MAPanicReport;
typedef struct MAPanicReportNative {
	/// The type of MoSync runtime that wrote the report. A \link #RUNTIME_MORE RUNTIME \endlink constant.
	int runtimeId;

	/**
	* The type report. Specifies whether the members \a code and \a string are valid.
	* A \link #REPORT_PANIC REPORT \endlink constant.
	*/
	int reportType;

	/// The time the report was generated. The format is unix time. \see maTime()
	int time;

	/**
	* The value of the MoSync instruction pointer at the time the report was generated.
	* \< 0 if the MoSync core was inaccessible.
	*/
	int ip;

	int code;

	char string[1];
} MAPanicReportNative;

/**
* \brief Information about a Bluetooth device.
*/
typedef struct MABtDevice {
	///in (pointer), out (buffer)
	MAAddress name;

	///in, the length of the buffer pointed to by a name.
	int nameBufSize;

	///out, the length of the name, excluding the terminating zero.
	int actualNameLength;

	///out
	MABtAddr address;
} MABtDevice;
typedef struct MABtDeviceNative {
	///in (pointer), out (buffer)
	char* name;

	///in, the length of the buffer pointed to by a name.
	int nameBufSize;

	///out, the length of the name, excluding the terminating zero.
	int actualNameLength;

	///out
	MABtAddr address;
} MABtDeviceNative;

/**
* \brief A Universally Unique Identifier.
*
* Common Bluetooth UUID values can be found in MAUtil/mauuid.h.
*/
typedef struct MAUUID {
	int i[4];
} MAUUID;
typedef struct MAUUIDNative {
	int i[4];
} MAUUIDNative;

/**
* \brief Information about an MABtService object.
*/
typedef struct MABtServiceSize {
	/**
	* The buffer size neccesary to contain the full name,
	* or <0 if the service has no name.
	*/
	int nameBufSize;

	/**
	* The number of UUIDs associated with the service.
	*/
	int nUuids;
} MABtServiceSize;
typedef struct MABtServiceSizeNative {
	/**
	* The buffer size neccesary to contain the full name,
	* or <0 if the service has no name.
	*/
	int nameBufSize;

	/**
	* The number of UUIDs associated with the service.
	*/
	int nUuids;
} MABtServiceSizeNative;

/**
* \brief Information about a Bluetooth service.
*/
typedef struct MABtService {
	/**
	* The port number for the service.
	* \see maConnect()
	*/
	int port;

	/**
	* Pointer to a buffer that receives the service's human-readable name.
	*/
	MAAddress name;

	/**
	* The size of the buffer being pointed to by \a name.
	*/
	int nameBufSize;

	/**
	* Pointer to a buffer that receives the UUIDs associated with the service.
	* The buffer must be large enough to contain the number of UUIDs reported
	* by the last call to maBtGetNextServiceSize().
	*/
	MAAddress uuids;
} MABtService;
typedef struct MABtServiceNative {
	/**
	* The port number for the service.
	* \see maConnect()
	*/
	int port;

	/**
	* Pointer to a buffer that receives the service's human-readable name.
	*/
	char* name;

	/**
	* The size of the buffer being pointed to by \a name.
	*/
	int nameBufSize;

	/**
	* Pointer to a buffer that receives the UUIDs associated with the service.
	* The buffer must be large enough to contain the number of UUIDs reported
	* by the last call to maBtGetNextServiceSize().
	*/
	MAUUID* uuids;
} MABtServiceNative;

/**
* \brief A geographical location specified by latitude and longitude, horizontal and vertical accuracy, and altitude.
*
* Only if \a state equals #MA_LOC_QUALIFIED do the other members contain valid data.
*
* Coordinates are in the WGS84 datum.
*
* The horizontal accuracy is the RMS (root mean square) of east accuracy
* (latitudinal error in meters, 1-sigma standard deviation), north accuracy
* (longitudinal error in meters, 1-sigma).
*
* The vertical accuracy is in meters in vertical direction
* (orthogonal to ellipsoid surface, 1-sigma standard deviation).
*
* Accuracy values may be NaN, if accuracy is unknown.
*
* \see maLocationStart()
*/
typedef struct MALocation {
	/**
	* The validity of the coordinates.
	* One of the \link #MA_LOC_NONE MA_LOC \endlink constants.
	*/
	int state;

	double lat;

	double lon;

	double horzAcc;

	double vertAcc;

	float alt;
} MALocation;
typedef struct MALocationNative {
	/**
	* The validity of the coordinates.
	* One of the \link #MA_LOC_NONE MA_LOC \endlink constants.
	*/
	int state;

	double lat;

	double lon;

	double horzAcc;

	double vertAcc;

	float alt;
} MALocationNative;

/**
* \brief A structure containing information about the native framebuffer, including color format and resolution.
*
* The 'sizeInBytes' field is the amount of bytes that should be used to allocate the offscreen framebuffer (a backbuffer).
*/
typedef struct MAFrameBufferInfo {
	int sizeInBytes;
	int bytesPerPixel;
	int bitsPerPixel;
	int redMask;
	int redShift;
	int redBits;
	int greenMask;
	int greenShift;
	int greenBits;
	int blueMask;
	int blueShift;
	int blueBits;
	int width;
	int height;
	int pitch;
	int supportsGfxSyscalls;
} MAFrameBufferInfo;
typedef struct MAFrameBufferInfoNative {
	int sizeInBytes;
	int bytesPerPixel;
	int bitsPerPixel;
	int redMask;
	int redShift;
	int redBits;
	int greenMask;
	int greenShift;
	int greenBits;
	int blueMask;
	int blueShift;
	int blueBits;
	int width;
	int height;
	int pitch;
	int supportsGfxSyscalls;
} MAFrameBufferInfoNative;

/**
* \brief The camera format, in pixels.
*/
/** @ingroup CameraFunctions */
typedef struct MA_CAMERA_FORMAT {
	int width;
	int height;
} MA_CAMERA_FORMAT;
typedef struct MA_CAMERA_FORMATNative {
	int width;
	int height;
} MA_CAMERA_FORMATNative;

#define maInvokeExtension_MAAPI_caselist \

#define maInvokeExtension_MAAPI_syscall_caselist \

#define maIOCtl_MAAPI_caselist \
maIOCtl_maFontLoadDefault_case(maFontLoadDefault) \
maIOCtl_maFontSetCurrent_case(maFontSetCurrent) \
maIOCtl_maFontGetCount_case(maFontGetCount) \
maIOCtl_maFontGetName_case(maFontGetName) \
maIOCtl_maFontLoadWithName_case(maFontLoadWithName) \
maIOCtl_maFontDelete_case(maFontDelete) \
maIOCtl_maReportCallStack_case(maReportCallStack) \
maIOCtl_maDumpCallStackEx_case(maDumpCallStackEx) \
maIOCtl_maProtectMemory_case(maProtectMemory) \
maIOCtl_maUnprotectMemory_case(maUnprotectMemory) \
maIOCtl_maSetMemoryProtection_case(maSetMemoryProtection) \
maIOCtl_maGetMemoryProtection_case(maGetMemoryProtection) \
maIOCtl_maGetBatteryCharge_case(maGetBatteryCharge) \
maIOCtl_maLockKeypad_case(maLockKeypad) \
maIOCtl_maUnlockKeypad_case(maUnlockKeypad) \
maIOCtl_maKeypadIsLocked_case(maKeypadIsLocked) \
maIOCtl_maWriteLog_case(maWriteLog) \
maIOCtl_maBtStartDeviceDiscovery_case(maBtStartDeviceDiscovery) \
maIOCtl_maBtGetNewDevice_case(maBtGetNewDevice) \
maIOCtl_maBtStartServiceDiscovery_case(maBtStartServiceDiscovery) \
maIOCtl_maBtGetNextServiceSize_case(maBtGetNextServiceSize) \
maIOCtl_maBtGetNewService_case(maBtGetNewService) \
maIOCtl_maBtCancelDiscovery_case(maBtCancelDiscovery) \
maIOCtl_maLocationStart_case(maLocationStart) \
maIOCtl_maLocationStop_case(maLocationStop) \
maIOCtl_maPlatformRequest_case(maPlatformRequest) \
maIOCtl_maFileOpen_case(maFileOpen) \
maIOCtl_maFileExists_case(maFileExists) \
maIOCtl_maFileClose_case(maFileClose) \
maIOCtl_maFileCreate_case(maFileCreate) \
maIOCtl_maFileDelete_case(maFileDelete) \
maIOCtl_maFileSize_case(maFileSize) \
maIOCtl_maFileAvailableSpace_case(maFileAvailableSpace) \
maIOCtl_maFileTotalSpace_case(maFileTotalSpace) \
maIOCtl_maFileDate_case(maFileDate) \
maIOCtl_maFileRename_case(maFileRename) \
maIOCtl_maFileTruncate_case(maFileTruncate) \
maIOCtl_maFileWrite_case(maFileWrite) \
maIOCtl_maFileWriteFromData_case(maFileWriteFromData) \
maIOCtl_maFileRead_case(maFileRead) \
maIOCtl_maFileReadToData_case(maFileReadToData) \
maIOCtl_maFileTell_case(maFileTell) \
maIOCtl_maFileSeek_case(maFileSeek) \
maIOCtl_maFileListStart_case(maFileListStart) \
maIOCtl_maFileListNext_case(maFileListNext) \
maIOCtl_maFileListClose_case(maFileListClose) \
maIOCtl_maSendTextSMS_case(maSendTextSMS) \
maIOCtl_maFrameBufferGetInfo_case(maFrameBufferGetInfo) \
maIOCtl_maFrameBufferInit_case(maFrameBufferInit) \
maIOCtl_maFrameBufferClose_case(maFrameBufferClose) \
maIOCtl_maAccept_case(maAccept) \
maIOCtl_maSendToBackground_case(maSendToBackground) \
maIOCtl_maBringToForeground_case(maBringToForeground) \
maIOCtl_maGetSystemProperty_case(maGetSystemProperty) \
maIOCtl_maCameraFormatNumber_case(maCameraFormatNumber) \
maIOCtl_maCameraFormat_case(maCameraFormat) \
maIOCtl_maCameraStart_case(maCameraStart) \
maIOCtl_maCameraStop_case(maCameraStop) \
maIOCtl_maCameraSetPreview_case(maCameraSetPreview) \
maIOCtl_maCameraSelect_case(maCameraSelect) \
maIOCtl_maCameraNumber_case(maCameraNumber) \
maIOCtl_maCameraSnapshot_case(maCameraSnapshot) \
maIOCtl_maCameraRecord_case(maCameraRecord) \
maIOCtl_maCameraSetProperty_case(maCameraSetProperty) \
maIOCtl_maCameraGetProperty_case(maCameraGetProperty) \
maIOCtl_maShowVirtualKeyboard_case(maShowVirtualKeyboard) \
maIOCtl_maTextBox_case(maTextBox) \
maIOCtl_maKeyCaptureStart_case(maKeyCaptureStart) \
maIOCtl_maKeyCaptureStop_case(maKeyCaptureStop) \
maIOCtl_maHomeScreenEventsOn_case(maHomeScreenEventsOn) \
maIOCtl_maHomeScreenEventsOff_case(maHomeScreenEventsOff) \
maIOCtl_maHomeScreenShortcutAdd_case(maHomeScreenShortcutAdd) \
maIOCtl_maHomeScreenShortcutRemove_case(maHomeScreenShortcutRemove) \
maIOCtl_maNotificationAdd_case(maNotificationAdd) \
maIOCtl_maNotificationRemove_case(maNotificationRemove) \
maIOCtl_maScreenSetOrientation_case(maScreenSetOrientation) \
maIOCtl_maScreenSetFullscreen_case(maScreenSetFullscreen) \
maIOCtl_maScreenStateEventsOn_case(maScreenStateEventsOn) \
maIOCtl_maScreenStateEventsOff_case(maScreenStateEventsOff) \
maIOCtl_maReportResourceInformation_case(maReportResourceInformation) \
maIOCtl_maMessageBox_case(maMessageBox) \
maIOCtl_maAlert_case(maAlert) \
maIOCtl_maImagePickerOpen_case(maImagePickerOpen) \
maIOCtl_maOptionsBox_case(maOptionsBox) \
maIOCtl_maSensorStart_case(maSensorStart) \
maIOCtl_maSensorStop_case(maSensorStop) \
maIOCtl_maNFCStart_case(maNFCStart) \
maIOCtl_maNFCStop_case(maNFCStop) \
maIOCtl_maNFCReadTag_case(maNFCReadTag) \
maIOCtl_maNFCDestroyTag_case(maNFCDestroyTag) \
maIOCtl_maNFCConnectTag_case(maNFCConnectTag) \
maIOCtl_maNFCCloseTag_case(maNFCCloseTag) \
maIOCtl_maNFCIsType_case(maNFCIsType) \
maIOCtl_maNFCGetTypedTag_case(maNFCGetTypedTag) \
maIOCtl_maNFCBatchStart_case(maNFCBatchStart) \
maIOCtl_maNFCBatchCommit_case(maNFCBatchCommit) \
maIOCtl_maNFCBatchRollback_case(maNFCBatchRollback) \
maIOCtl_maNFCTransceive_case(maNFCTransceive) \
maIOCtl_maNFCSetReadOnly_case(maNFCSetReadOnly) \
maIOCtl_maNFCIsReadOnly_case(maNFCIsReadOnly) \
maIOCtl_maNFCGetSize_case(maNFCGetSize) \
maIOCtl_maNFCReadNDEFMessage_case(maNFCReadNDEFMessage) \
maIOCtl_maNFCWriteNDEFMessage_case(maNFCWriteNDEFMessage) \
maIOCtl_maNFCCreateNDEFMessage_case(maNFCCreateNDEFMessage) \
maIOCtl_maNFCGetNDEFMessage_case(maNFCGetNDEFMessage) \
maIOCtl_maNFCGetNDEFRecord_case(maNFCGetNDEFRecord) \
maIOCtl_maNFCGetNDEFRecordCount_case(maNFCGetNDEFRecordCount) \
maIOCtl_maNFCGetNDEFId_case(maNFCGetNDEFId) \
maIOCtl_maNFCGetNDEFPayload_case(maNFCGetNDEFPayload) \
maIOCtl_maNFCGetNDEFTnf_case(maNFCGetNDEFTnf) \
maIOCtl_maNFCGetNDEFType_case(maNFCGetNDEFType) \
maIOCtl_maNFCSetNDEFId_case(maNFCSetNDEFId) \
maIOCtl_maNFCSetNDEFPayload_case(maNFCSetNDEFPayload) \
maIOCtl_maNFCSetNDEFTnf_case(maNFCSetNDEFTnf) \
maIOCtl_maNFCSetNDEFType_case(maNFCSetNDEFType) \
maIOCtl_maNFCAuthenticateMifareSector_case(maNFCAuthenticateMifareSector) \
maIOCtl_maNFCGetMifareSectorCount_case(maNFCGetMifareSectorCount) \
maIOCtl_maNFCGetMifareBlockCountInSector_case(maNFCGetMifareBlockCountInSector) \
maIOCtl_maNFCMifareSectorToBlock_case(maNFCMifareSectorToBlock) \
maIOCtl_maNFCReadMifareBlocks_case(maNFCReadMifareBlocks) \
maIOCtl_maNFCWriteMifareBlocks_case(maNFCWriteMifareBlocks) \
maIOCtl_maNFCReadMifarePages_case(maNFCReadMifarePages) \
maIOCtl_maNFCWriteMifarePages_case(maNFCWriteMifarePages) \
maIOCtl_maSyscallPanicsEnable_case(maSyscallPanicsEnable) \
maIOCtl_maSyscallPanicsDisable_case(maSyscallPanicsDisable) \

#define maIOCtl_MAAPI_syscall_caselist \
maIOCtl_syscall_case(maFontLoadDefault) \
maIOCtl_syscall_case(maFontSetCurrent) \
maIOCtl_syscall_case(maFontGetCount) \
maIOCtl_syscall_case(maFontGetName) \
maIOCtl_syscall_case(maFontLoadWithName) \
maIOCtl_syscall_case(maFontDelete) \
maIOCtl_syscall_case(maReportCallStack) \
maIOCtl_syscall_case(maDumpCallStackEx) \
maIOCtl_syscall_case(maProtectMemory) \
maIOCtl_syscall_case(maUnprotectMemory) \
maIOCtl_syscall_case(maSetMemoryProtection) \
maIOCtl_syscall_case(maGetMemoryProtection) \
maIOCtl_syscall_case(maGetBatteryCharge) \
maIOCtl_syscall_case(maLockKeypad) \
maIOCtl_syscall_case(maUnlockKeypad) \
maIOCtl_syscall_case(maKeypadIsLocked) \
maIOCtl_syscall_case(maWriteLog) \
maIOCtl_syscall_case(maBtStartDeviceDiscovery) \
maIOCtl_syscall_case(maBtGetNewDevice) \
maIOCtl_syscall_case(maBtStartServiceDiscovery) \
maIOCtl_syscall_case(maBtGetNextServiceSize) \
maIOCtl_syscall_case(maBtGetNewService) \
maIOCtl_syscall_case(maBtCancelDiscovery) \
maIOCtl_syscall_case(maLocationStart) \
maIOCtl_syscall_case(maLocationStop) \
maIOCtl_syscall_case(maPlatformRequest) \
maIOCtl_syscall_case(maFileOpen) \
maIOCtl_syscall_case(maFileExists) \
maIOCtl_syscall_case(maFileClose) \
maIOCtl_syscall_case(maFileCreate) \
maIOCtl_syscall_case(maFileDelete) \
maIOCtl_syscall_case(maFileSize) \
maIOCtl_syscall_case(maFileAvailableSpace) \
maIOCtl_syscall_case(maFileTotalSpace) \
maIOCtl_syscall_case(maFileDate) \
maIOCtl_syscall_case(maFileRename) \
maIOCtl_syscall_case(maFileTruncate) \
maIOCtl_syscall_case(maFileWrite) \
maIOCtl_syscall_case(maFileWriteFromData) \
maIOCtl_syscall_case(maFileRead) \
maIOCtl_syscall_case(maFileReadToData) \
maIOCtl_syscall_case(maFileTell) \
maIOCtl_syscall_case(maFileSeek) \
maIOCtl_syscall_case(maFileListStart) \
maIOCtl_syscall_case(maFileListNext) \
maIOCtl_syscall_case(maFileListClose) \
maIOCtl_syscall_case(maSendTextSMS) \
maIOCtl_syscall_case(maFrameBufferGetInfo) \
maIOCtl_syscall_case(maFrameBufferInit) \
maIOCtl_syscall_case(maFrameBufferClose) \
maIOCtl_syscall_case(maAccept) \
maIOCtl_syscall_case(maSendToBackground) \
maIOCtl_syscall_case(maBringToForeground) \
maIOCtl_syscall_case(maGetSystemProperty) \
maIOCtl_syscall_case(maCameraFormatNumber) \
maIOCtl_syscall_case(maCameraFormat) \
maIOCtl_syscall_case(maCameraStart) \
maIOCtl_syscall_case(maCameraStop) \
maIOCtl_syscall_case(maCameraSetPreview) \
maIOCtl_syscall_case(maCameraSelect) \
maIOCtl_syscall_case(maCameraNumber) \
maIOCtl_syscall_case(maCameraSnapshot) \
maIOCtl_syscall_case(maCameraRecord) \
maIOCtl_syscall_case(maCameraSetProperty) \
maIOCtl_syscall_case(maCameraGetProperty) \
maIOCtl_syscall_case(maShowVirtualKeyboard) \
maIOCtl_syscall_case(maTextBox) \
maIOCtl_syscall_case(maKeyCaptureStart) \
maIOCtl_syscall_case(maKeyCaptureStop) \
maIOCtl_syscall_case(maHomeScreenEventsOn) \
maIOCtl_syscall_case(maHomeScreenEventsOff) \
maIOCtl_syscall_case(maHomeScreenShortcutAdd) \
maIOCtl_syscall_case(maHomeScreenShortcutRemove) \
maIOCtl_syscall_case(maNotificationAdd) \
maIOCtl_syscall_case(maNotificationRemove) \
maIOCtl_syscall_case(maScreenSetOrientation) \
maIOCtl_syscall_case(maScreenSetFullscreen) \
maIOCtl_syscall_case(maScreenStateEventsOn) \
maIOCtl_syscall_case(maScreenStateEventsOff) \
maIOCtl_syscall_case(maReportResourceInformation) \
maIOCtl_syscall_case(maMessageBox) \
maIOCtl_syscall_case(maAlert) \
maIOCtl_syscall_case(maImagePickerOpen) \
maIOCtl_syscall_case(maOptionsBox) \
maIOCtl_syscall_case(maSensorStart) \
maIOCtl_syscall_case(maSensorStop) \
maIOCtl_syscall_case(maNFCStart) \
maIOCtl_syscall_case(maNFCStop) \
maIOCtl_syscall_case(maNFCReadTag) \
maIOCtl_syscall_case(maNFCDestroyTag) \
maIOCtl_syscall_case(maNFCConnectTag) \
maIOCtl_syscall_case(maNFCCloseTag) \
maIOCtl_syscall_case(maNFCIsType) \
maIOCtl_syscall_case(maNFCGetTypedTag) \
maIOCtl_syscall_case(maNFCBatchStart) \
maIOCtl_syscall_case(maNFCBatchCommit) \
maIOCtl_syscall_case(maNFCBatchRollback) \
maIOCtl_syscall_case(maNFCTransceive) \
maIOCtl_syscall_case(maNFCSetReadOnly) \
maIOCtl_syscall_case(maNFCIsReadOnly) \
maIOCtl_syscall_case(maNFCGetSize) \
maIOCtl_syscall_case(maNFCReadNDEFMessage) \
maIOCtl_syscall_case(maNFCWriteNDEFMessage) \
maIOCtl_syscall_case(maNFCCreateNDEFMessage) \
maIOCtl_syscall_case(maNFCGetNDEFMessage) \
maIOCtl_syscall_case(maNFCGetNDEFRecord) \
maIOCtl_syscall_case(maNFCGetNDEFRecordCount) \
maIOCtl_syscall_case(maNFCGetNDEFId) \
maIOCtl_syscall_case(maNFCGetNDEFPayload) \
maIOCtl_syscall_case(maNFCGetNDEFTnf) \
maIOCtl_syscall_case(maNFCGetNDEFType) \
maIOCtl_syscall_case(maNFCSetNDEFId) \
maIOCtl_syscall_case(maNFCSetNDEFPayload) \
maIOCtl_syscall_case(maNFCSetNDEFTnf) \
maIOCtl_syscall_case(maNFCSetNDEFType) \
maIOCtl_syscall_case(maNFCAuthenticateMifareSector) \
maIOCtl_syscall_case(maNFCGetMifareSectorCount) \
maIOCtl_syscall_case(maNFCGetMifareBlockCountInSector) \
maIOCtl_syscall_case(maNFCMifareSectorToBlock) \
maIOCtl_syscall_case(maNFCReadMifareBlocks) \
maIOCtl_syscall_case(maNFCWriteMifareBlocks) \
maIOCtl_syscall_case(maNFCReadMifarePages) \
maIOCtl_syscall_case(maNFCWriteMifarePages) \
maIOCtl_syscall_case(maSyscallPanicsEnable) \
maIOCtl_syscall_case(maSyscallPanicsDisable) \

#define maIOCtl_maFontLoadDefault 1
#define maIOCtl_maFontLoadDefault_case(func) \
case 1: \
{ \
int _type = a; \
int _style = b; \
int _size = c; \
return func(_type, _style, _size); \
} \

#define maIOCtl_maFontSetCurrent 2
#define maIOCtl_maFontSetCurrent_case(func) \
case 2: \
{ \
MAHandle _font = (MAHandle)a; \
return func(_font); \
} \

#define maIOCtl_maFontGetCount 3
#define maIOCtl_maFontGetCount_case(func) \
case 3: \
{ \
return func(); \
} \

#define maIOCtl_maFontGetName 4
#define maIOCtl_maFontGetName_case(func) \
case 4: \
{ \
int _index = a; \
int _bufferLen = c; \
char* _buffer = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _bufferLen); \
return func(_index, _buffer, _bufferLen); \
} \

#define maIOCtl_maFontLoadWithName 5
#define maIOCtl_maFontLoadWithName_case(func) \
case 5: \
{ \
const char* _postScriptName = GVMR(a, char); \
int _size = b; \
return func(_postScriptName, _size); \
} \

#define maIOCtl_maFontDelete 6
#define maIOCtl_maFontDelete_case(func) \
case 6: \
{ \
MAHandle _font = (MAHandle)a; \
return func(_font); \
} \

#define maIOCtl_maReportCallStack 7
#define maIOCtl_maReportCallStack_case(func) \
case 7: \
{ \
return func(); \
} \

#define maIOCtl_maDumpCallStackEx 8
#define maIOCtl_maDumpCallStackEx_case(func) \
case 8: \
{ \
const char* _str = GVS(a); \
int _data = b; \
return func(_str, _data); \
} \

#define maIOCtl_maProtectMemory 9
#define maIOCtl_maProtectMemory_case(func) \
case 9: \
{ \
const void* _start = GVMR(a, MAAddress); \
int _length = b; \
func(_start, _length); \
return 0; \
} \

#define maIOCtl_maUnprotectMemory 10
#define maIOCtl_maUnprotectMemory_case(func) \
case 10: \
{ \
const void* _start = GVMR(a, MAAddress); \
int _length = b; \
func(_start, _length); \
return 0; \
} \

#define maIOCtl_maSetMemoryProtection 11
#define maIOCtl_maSetMemoryProtection_case(func) \
case 11: \
{ \
int _enable = a; \
func(_enable); \
return 0; \
} \

#define maIOCtl_maGetMemoryProtection 12
#define maIOCtl_maGetMemoryProtection_case(func) \
case 12: \
{ \
return func(); \
} \

#define maIOCtl_maGetBatteryCharge 13
#define maIOCtl_maGetBatteryCharge_case(func) \
case 13: \
{ \
return func(); \
} \

#define maIOCtl_maLockKeypad 23
#define maIOCtl_maLockKeypad_case(func) \
case 23: \
{ \
return func(); \
} \

#define maIOCtl_maUnlockKeypad 24
#define maIOCtl_maUnlockKeypad_case(func) \
case 24: \
{ \
return func(); \
} \

#define maIOCtl_maKeypadIsLocked 25
#define maIOCtl_maKeypadIsLocked_case(func) \
case 25: \
{ \
return func(); \
} \

#define maIOCtl_maWriteLog 26
#define maIOCtl_maWriteLog_case(func) \
case 26: \
{ \
const void* _src = GVMR(a, MAAddress); \
int _size = b; \
return func(_src, _size); \
} \

#define maIOCtl_maBtStartDeviceDiscovery 27
#define maIOCtl_maBtStartDeviceDiscovery_case(func) \
case 27: \
{ \
int _names = a; \
return func(_names); \
} \

#define maIOCtl_maBtGetNewDevice 28
#define maIOCtl_maBtGetNewDevice_case(func) \
case 28: \
{ \
MABtDevice* _d = GVMR(a, MABtDevice); \
return func(_d); \
} \

#define maIOCtl_maBtStartServiceDiscovery 29
#define maIOCtl_maBtStartServiceDiscovery_case(func) \
case 29: \
{ \
const MABtAddr* _address = GVMR(a, MABtAddr); \
const MAUUID* _uuid = GVMR(b, MAUUID); \
return func(_address, _uuid); \
} \

#define maIOCtl_maBtGetNextServiceSize 30
#define maIOCtl_maBtGetNextServiceSize_case(func) \
case 30: \
{ \
MABtServiceSize* _dst = GVMR(a, MABtServiceSize); \
return func(_dst); \
} \

#define maIOCtl_maBtGetNewService 31
#define maIOCtl_maBtGetNewService_case(func) \
case 31: \
{ \
MABtService* _dst = GVMR(a, MABtService); \
return func(_dst); \
} \

#define maIOCtl_maBtCancelDiscovery 32
#define maIOCtl_maBtCancelDiscovery_case(func) \
case 32: \
{ \
return func(); \
} \

#define maIOCtl_maLocationStart 35
#define maIOCtl_maLocationStart_case(func) \
case 35: \
{ \
return func(); \
} \

#define maIOCtl_maLocationStop 36
#define maIOCtl_maLocationStop_case(func) \
case 36: \
{ \
return func(); \
} \

#define maIOCtl_maPlatformRequest 37
#define maIOCtl_maPlatformRequest_case(func) \
case 37: \
{ \
const char* _url = GVS(a); \
return func(_url); \
} \

#define maIOCtl_maFileOpen 38
#define maIOCtl_maFileOpen_case(func) \
case 38: \
{ \
const char* _path = GVS(a); \
int _mode = b; \
return func(_path, _mode); \
} \

#define maIOCtl_maFileExists 39
#define maIOCtl_maFileExists_case(func) \
case 39: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileClose 40
#define maIOCtl_maFileClose_case(func) \
case 40: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileCreate 41
#define maIOCtl_maFileCreate_case(func) \
case 41: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileDelete 42
#define maIOCtl_maFileDelete_case(func) \
case 42: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileSize 43
#define maIOCtl_maFileSize_case(func) \
case 43: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileAvailableSpace 44
#define maIOCtl_maFileAvailableSpace_case(func) \
case 44: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileTotalSpace 45
#define maIOCtl_maFileTotalSpace_case(func) \
case 45: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileDate 46
#define maIOCtl_maFileDate_case(func) \
case 46: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileRename 47
#define maIOCtl_maFileRename_case(func) \
case 47: \
{ \
MAHandle _file = (MAHandle)a; \
const char* _newName = GVS(b); \
return func(_file, _newName); \
} \

#define maIOCtl_maFileTruncate 48
#define maIOCtl_maFileTruncate_case(func) \
case 48: \
{ \
MAHandle _file = (MAHandle)a; \
int _offset = b; \
return func(_file, _offset); \
} \

#define maIOCtl_maFileWrite 49
#define maIOCtl_maFileWrite_case(func) \
case 49: \
{ \
MAHandle _file = (MAHandle)a; \
const void* _src = GVMR(b, MAAddress); \
int _len = c; \
return func(_file, _src, _len); \
} \

#define maIOCtl_maFileWriteFromData 50
#define maIOCtl_maFileWriteFromData_case(func) \
case 50: \
{ \
MAHandle _file = (MAHandle)a; \
MAHandle _data = (MAHandle)b; \
int _offset = c; \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_file, _data, _offset, _len); \
} \

#define maIOCtl_maFileRead 51
#define maIOCtl_maFileRead_case(func) \
case 51: \
{ \
MAHandle _file = (MAHandle)a; \
void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_file, _dst, _len); \
} \

#define maIOCtl_maFileReadToData 52
#define maIOCtl_maFileReadToData_case(func) \
case 52: \
{ \
MAHandle _file = (MAHandle)a; \
MAHandle _data = (MAHandle)b; \
int _offset = c; \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_file, _data, _offset, _len); \
} \

#define maIOCtl_maFileTell 53
#define maIOCtl_maFileTell_case(func) \
case 53: \
{ \
MAHandle _file = (MAHandle)a; \
return func(_file); \
} \

#define maIOCtl_maFileSeek 54
#define maIOCtl_maFileSeek_case(func) \
case 54: \
{ \
MAHandle _file = (MAHandle)a; \
int _offset = b; \
int _whence = c; \
return func(_file, _offset, _whence); \
} \

#define maIOCtl_maFileListStart 55
#define maIOCtl_maFileListStart_case(func) \
case 55: \
{ \
const char* _path = GVS(a); \
const char* _filter = GVS(b); \
int _sorting = c; \
return func(_path, _filter, _sorting); \
} \

#define maIOCtl_maFileListNext 56
#define maIOCtl_maFileListNext_case(func) \
case 56: \
{ \
MAHandle _list = (MAHandle)a; \
int _bufSize = c; \
char* _nameBuf = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _bufSize); \
return func(_list, _nameBuf, _bufSize); \
} \

#define maIOCtl_maFileListClose 57
#define maIOCtl_maFileListClose_case(func) \
case 57: \
{ \
MAHandle _list = (MAHandle)a; \
return func(_list); \
} \

#define maIOCtl_maSendTextSMS 58
#define maIOCtl_maSendTextSMS_case(func) \
case 58: \
{ \
const char* _dst = GVS(a); \
const char* _msg = GVS(b); \
return func(_dst, _msg); \
} \

#define maIOCtl_maFrameBufferGetInfo 76
#define maIOCtl_maFrameBufferGetInfo_case(func) \
case 76: \
{ \
MAFrameBufferInfo* _info = GVMR(a, MAFrameBufferInfo); \
return func(_info); \
} \

#define maIOCtl_maFrameBufferInit 77
#define maIOCtl_maFrameBufferInit_case(func) \
case 77: \
{ \
const void* _data = GVMR(a, MAAddress); \
return func(_data); \
} \

#define maIOCtl_maFrameBufferClose 78
#define maIOCtl_maFrameBufferClose_case(func) \
case 78: \
{ \
return func(); \
} \

#define maIOCtl_maAccept 82
#define maIOCtl_maAccept_case(func) \
case 82: \
{ \
MAHandle _serv = (MAHandle)a; \
return func(_serv); \
} \

#define maIOCtl_maSendToBackground 83
#define maIOCtl_maSendToBackground_case(func) \
case 83: \
{ \
return func(); \
} \

#define maIOCtl_maBringToForeground 84
#define maIOCtl_maBringToForeground_case(func) \
case 84: \
{ \
return func(); \
} \

#define maIOCtl_maGetSystemProperty 86
#define maIOCtl_maGetSystemProperty_case(func) \
case 86: \
{ \
const char* _key = GVS(a); \
int _size = c; \
char* _buf = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _size); \
return func(_key, _buf, _size); \
} \

#define maIOCtl_maCameraFormatNumber 116
#define maIOCtl_maCameraFormatNumber_case(func) \
case 116: \
{ \
return func(); \
} \

#define maIOCtl_maCameraFormat 117
#define maIOCtl_maCameraFormat_case(func) \
case 117: \
{ \
int _index = a; \
MA_CAMERA_FORMAT* _fmt = GVMR(b, MA_CAMERA_FORMAT); \
return func(_index, _fmt); \
} \

#define maIOCtl_maCameraStart 118
#define maIOCtl_maCameraStart_case(func) \
case 118: \
{ \
return func(); \
} \

#define maIOCtl_maCameraStop 119
#define maIOCtl_maCameraStop_case(func) \
case 119: \
{ \
return func(); \
} \

#define maIOCtl_maCameraSetPreview 120
#define maIOCtl_maCameraSetPreview_case(func) \
case 120: \
{ \
MAHandle _widgetHandle = (MAHandle)a; \
return func(_widgetHandle); \
} \

#define maIOCtl_maCameraSelect 121
#define maIOCtl_maCameraSelect_case(func) \
case 121: \
{ \
int _cameraNumber = a; \
return func(_cameraNumber); \
} \

#define maIOCtl_maCameraNumber 122
#define maIOCtl_maCameraNumber_case(func) \
case 122: \
{ \
return func(); \
} \

#define maIOCtl_maCameraSnapshot 123
#define maIOCtl_maCameraSnapshot_case(func) \
case 123: \
{ \
int _formatIndex = a; \
MAHandle _placeholder = (MAHandle)b; \
return func(_formatIndex, _placeholder); \
} \

#define maIOCtl_maCameraRecord 124
#define maIOCtl_maCameraRecord_case(func) \
case 124: \
{ \
int _stopStartFlag = a; \
return func(_stopStartFlag); \
} \

#define maIOCtl_maCameraSetProperty 125
#define maIOCtl_maCameraSetProperty_case(func) \
case 125: \
{ \
const char* _property = GVS(a); \
const char* _value = GVS(b); \
return func(_property, _value); \
} \

#define maIOCtl_maCameraGetProperty 126
#define maIOCtl_maCameraGetProperty_case(func) \
case 126: \
{ \
const char* _property = GVS(a); \
int _bufSize = c; \
char* _value = (MAString) SYSCALL_THIS->GetValidatedMemRange(b, _bufSize); \
return func(_property, _value, _bufSize); \
} \

#define maIOCtl_maShowVirtualKeyboard 127
#define maIOCtl_maShowVirtualKeyboard_case(func) \
case 127: \
{ \
return func(); \
} \

#define maIOCtl_maTextBox 128
#define maIOCtl_maTextBox_case(func) \
case 128: \
{ \
const wchar* _title = GVWS(a); \
const wchar* _inText = GVWS(b); \
int _maxSize = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
int _constraints = SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE); \
wchar* _outText = (MAWString) SYSCALL_THIS->GetValidatedMemRange(c, _maxSize * sizeof(wchar)); \
return func(_title, _inText, _outText, _maxSize, _constraints); \
} \

#define maIOCtl_maKeyCaptureStart 129
#define maIOCtl_maKeyCaptureStart_case(func) \
case 129: \
{ \
int _keyCode = a; \
return func(_keyCode); \
} \

#define maIOCtl_maKeyCaptureStop 130
#define maIOCtl_maKeyCaptureStop_case(func) \
case 130: \
{ \
return func(); \
} \

#define maIOCtl_maHomeScreenEventsOn 131
#define maIOCtl_maHomeScreenEventsOn_case(func) \
case 131: \
{ \
return func(); \
} \

#define maIOCtl_maHomeScreenEventsOff 132
#define maIOCtl_maHomeScreenEventsOff_case(func) \
case 132: \
{ \
return func(); \
} \

#define maIOCtl_maHomeScreenShortcutAdd 133
#define maIOCtl_maHomeScreenShortcutAdd_case(func) \
case 133: \
{ \
const char* _name = GVS(a); \
return func(_name); \
} \

#define maIOCtl_maHomeScreenShortcutRemove 134
#define maIOCtl_maHomeScreenShortcutRemove_case(func) \
case 134: \
{ \
const char* _name = GVS(a); \
return func(_name); \
} \

#define maIOCtl_maNotificationAdd 135
#define maIOCtl_maNotificationAdd_case(func) \
case 135: \
{ \
int _type = a; \
int _id = b; \
const char* _title = GVS(c); \
const char* _text = GVS(SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE)); \
return func(_type, _id, _title, _text); \
} \

#define maIOCtl_maNotificationRemove 136
#define maIOCtl_maNotificationRemove_case(func) \
case 136: \
{ \
int _id = a; \
return func(_id); \
} \

#define maIOCtl_maScreenSetOrientation 137
#define maIOCtl_maScreenSetOrientation_case(func) \
case 137: \
{ \
int _orientation = a; \
return func(_orientation); \
} \

#define maIOCtl_maScreenSetFullscreen 138
#define maIOCtl_maScreenSetFullscreen_case(func) \
case 138: \
{ \
int _fullscreen = a; \
return func(_fullscreen); \
} \

#define maIOCtl_maScreenStateEventsOn 139
#define maIOCtl_maScreenStateEventsOn_case(func) \
case 139: \
{ \
return func(); \
} \

#define maIOCtl_maScreenStateEventsOff 140
#define maIOCtl_maScreenStateEventsOff_case(func) \
case 140: \
{ \
return func(); \
} \

#define maIOCtl_maReportResourceInformation 389
#define maIOCtl_maReportResourceInformation_case(func) \
case 389: \
{ \
func(); \
return 0; \
} \

#define maIOCtl_maMessageBox 390
#define maIOCtl_maMessageBox_case(func) \
case 390: \
{ \
const char* _title = GVS(a); \
const char* _message = GVS(b); \
func(_title, _message); \
return 0; \
} \

#define maIOCtl_maAlert 391
#define maIOCtl_maAlert_case(func) \
case 391: \
{ \
const char* _title = GVS(a); \
const char* _message = GVS(b); \
const char* _button1 = GVS(c); \
const char* _button2 = GVS(SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE)); \
const char* _button3 = GVS(SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE)); \
func(_title, _message, _button1, _button2, _button3); \
return 0; \
} \

#define maIOCtl_maImagePickerOpen 392
#define maIOCtl_maImagePickerOpen_case(func) \
case 392: \
{ \
func(); \
return 0; \
} \

#define maIOCtl_maOptionsBox 393
#define maIOCtl_maOptionsBox_case(func) \
case 393: \
{ \
const wchar* _title = GVWS(a); \
const wchar* _destructiveButtonTitle = GVWS(b); \
const wchar* _cancelButtonTitle = GVWS(c); \
const void* _otherButtonTitles = GVMR(SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE), MAAddress); \
int _otherButtonTitlesSize = SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE); \
func(_title, _destructiveButtonTitle, _cancelButtonTitle, _otherButtonTitles, _otherButtonTitlesSize); \
return 0; \
} \

#define maIOCtl_maSensorStart 394
#define maIOCtl_maSensorStart_case(func) \
case 394: \
{ \
int _sensor = a; \
int _interval = b; \
return func(_sensor, _interval); \
} \

#define maIOCtl_maSensorStop 395
#define maIOCtl_maSensorStop_case(func) \
case 395: \
{ \
int _sensor = a; \
return func(_sensor); \
} \

#define maIOCtl_maNFCStart 396
#define maIOCtl_maNFCStart_case(func) \
case 396: \
{ \
return func(); \
} \

#define maIOCtl_maNFCStop 397
#define maIOCtl_maNFCStop_case(func) \
case 397: \
{ \
func(); \
return 0; \
} \

#define maIOCtl_maNFCReadTag 398
#define maIOCtl_maNFCReadTag_case(func) \
case 398: \
{ \
MAHandle _nfcContext = (MAHandle)a; \
return func(_nfcContext); \
} \

#define maIOCtl_maNFCDestroyTag 399
#define maIOCtl_maNFCDestroyTag_case(func) \
case 399: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
func(_tagHandle); \
return 0; \
} \

#define maIOCtl_maNFCConnectTag 400
#define maIOCtl_maNFCConnectTag_case(func) \
case 400: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
func(_tagHandle); \
return 0; \
} \

#define maIOCtl_maNFCCloseTag 401
#define maIOCtl_maNFCCloseTag_case(func) \
case 401: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
func(_tagHandle); \
return 0; \
} \

#define maIOCtl_maNFCIsType 402
#define maIOCtl_maNFCIsType_case(func) \
case 402: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _type = b; \
return func(_tagHandle, _type); \
} \

#define maIOCtl_maNFCGetTypedTag 403
#define maIOCtl_maNFCGetTypedTag_case(func) \
case 403: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _type = b; \
return func(_tagHandle, _type); \
} \

#define maIOCtl_maNFCBatchStart 404
#define maIOCtl_maNFCBatchStart_case(func) \
case 404: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
return func(_tagHandle); \
} \

#define maIOCtl_maNFCBatchCommit 405
#define maIOCtl_maNFCBatchCommit_case(func) \
case 405: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
func(_tagHandle); \
return 0; \
} \

#define maIOCtl_maNFCBatchRollback 406
#define maIOCtl_maNFCBatchRollback_case(func) \
case 406: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
func(_tagHandle); \
return 0; \
} \

#define maIOCtl_maNFCTransceive 407
#define maIOCtl_maNFCTransceive_case(func) \
case 407: \
{ \
MAHandle _tag = (MAHandle)a; \
const void* _src = GVMR(b, MAAddress); \
int _srcLen = c; \
void* _dst = GVMR(SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE), MAAddress); \
int* _dstLen = GVMR(SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE), int); \
return func(_tag, _src, _srcLen, _dst, _dstLen); \
} \

#define maIOCtl_maNFCSetReadOnly 408
#define maIOCtl_maNFCSetReadOnly_case(func) \
case 408: \
{ \
MAHandle _tag = (MAHandle)a; \
return func(_tag); \
} \

#define maIOCtl_maNFCIsReadOnly 409
#define maIOCtl_maNFCIsReadOnly_case(func) \
case 409: \
{ \
MAHandle _tag = (MAHandle)a; \
return func(_tag); \
} \

#define maIOCtl_maNFCGetSize 410
#define maIOCtl_maNFCGetSize_case(func) \
case 410: \
{ \
MAHandle _tag = (MAHandle)a; \
return func(_tag); \
} \

#define maIOCtl_maNFCReadNDEFMessage 411
#define maIOCtl_maNFCReadNDEFMessage_case(func) \
case 411: \
{ \
MAHandle _tag = (MAHandle)a; \
return func(_tag); \
} \

#define maIOCtl_maNFCWriteNDEFMessage 412
#define maIOCtl_maNFCWriteNDEFMessage_case(func) \
case 412: \
{ \
MAHandle _tag = (MAHandle)a; \
MAHandle _ndefMessage = (MAHandle)b; \
return func(_tag, _ndefMessage); \
} \

#define maIOCtl_maNFCCreateNDEFMessage 413
#define maIOCtl_maNFCCreateNDEFMessage_case(func) \
case 413: \
{ \
int _recordCount = a; \
return func(_recordCount); \
} \

#define maIOCtl_maNFCGetNDEFMessage 414
#define maIOCtl_maNFCGetNDEFMessage_case(func) \
case 414: \
{ \
MAHandle _tag = (MAHandle)a; \
return func(_tag); \
} \

#define maIOCtl_maNFCGetNDEFRecord 415
#define maIOCtl_maNFCGetNDEFRecord_case(func) \
case 415: \
{ \
MAHandle _ndef = (MAHandle)a; \
int _ix = b; \
return func(_ndef, _ix); \
} \

#define maIOCtl_maNFCGetNDEFRecordCount 416
#define maIOCtl_maNFCGetNDEFRecordCount_case(func) \
case 416: \
{ \
MAHandle _ndef = (MAHandle)a; \
return func(_ndef); \
} \

#define maIOCtl_maNFCGetNDEFId 417
#define maIOCtl_maNFCGetNDEFId_case(func) \
case 417: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCGetNDEFPayload 418
#define maIOCtl_maNFCGetNDEFPayload_case(func) \
case 418: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCGetNDEFTnf 419
#define maIOCtl_maNFCGetNDEFTnf_case(func) \
case 419: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
return func(_ndefRecord); \
} \

#define maIOCtl_maNFCGetNDEFType 420
#define maIOCtl_maNFCGetNDEFType_case(func) \
case 420: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCSetNDEFId 421
#define maIOCtl_maNFCSetNDEFId_case(func) \
case 421: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
const void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCSetNDEFPayload 422
#define maIOCtl_maNFCSetNDEFPayload_case(func) \
case 422: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
const void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCSetNDEFTnf 423
#define maIOCtl_maNFCSetNDEFTnf_case(func) \
case 423: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
int _tnf = b; \
return func(_ndefRecord, _tnf); \
} \

#define maIOCtl_maNFCSetNDEFType 424
#define maIOCtl_maNFCSetNDEFType_case(func) \
case 424: \
{ \
MAHandle _ndefRecord = (MAHandle)a; \
const void* _dst = GVMR(b, MAAddress); \
int _len = c; \
return func(_ndefRecord, _dst, _len); \
} \

#define maIOCtl_maNFCAuthenticateMifareSector 425
#define maIOCtl_maNFCAuthenticateMifareSector_case(func) \
case 425: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _keyType = b; \
int _sectorIndex = c; \
const void* _keySrc = GVMR(SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE), MAAddress); \
int _keyLen = SYSCALL_THIS->GetValidatedStackValue(4 VSV_ARGPTR_USE); \
return func(_tagHandle, _keyType, _sectorIndex, _keySrc, _keyLen); \
} \

#define maIOCtl_maNFCGetMifareSectorCount 426
#define maIOCtl_maNFCGetMifareSectorCount_case(func) \
case 426: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
return func(_tagHandle); \
} \

#define maIOCtl_maNFCGetMifareBlockCountInSector 427
#define maIOCtl_maNFCGetMifareBlockCountInSector_case(func) \
case 427: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _sector = b; \
return func(_tagHandle, _sector); \
} \

#define maIOCtl_maNFCMifareSectorToBlock 428
#define maIOCtl_maNFCMifareSectorToBlock_case(func) \
case 428: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _sector = b; \
return func(_tagHandle, _sector); \
} \

#define maIOCtl_maNFCReadMifareBlocks 429
#define maIOCtl_maNFCReadMifareBlocks_case(func) \
case 429: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _firstBlock = b; \
void* _dst = GVMR(c, MAAddress); \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_tagHandle, _firstBlock, _dst, _len); \
} \

#define maIOCtl_maNFCWriteMifareBlocks 430
#define maIOCtl_maNFCWriteMifareBlocks_case(func) \
case 430: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _firstBlock = b; \
const void* _dst = GVMR(c, MAAddress); \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_tagHandle, _firstBlock, _dst, _len); \
} \

#define maIOCtl_maNFCReadMifarePages 431
#define maIOCtl_maNFCReadMifarePages_case(func) \
case 431: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _firstPage = b; \
void* _dst = GVMR(c, MAAddress); \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_tagHandle, _firstPage, _dst, _len); \
} \

#define maIOCtl_maNFCWriteMifarePages 432
#define maIOCtl_maNFCWriteMifarePages_case(func) \
case 432: \
{ \
MAHandle _tagHandle = (MAHandle)a; \
int _firstPage = b; \
const void* _dst = GVMR(c, MAAddress); \
int _len = SYSCALL_THIS->GetValidatedStackValue(0 VSV_ARGPTR_USE); \
return func(_tagHandle, _firstPage, _dst, _len); \
} \

#define maIOCtl_maSyscallPanicsEnable 433
#define maIOCtl_maSyscallPanicsEnable_case(func) \
case 433: \
{ \
return func(); \
} \

#define maIOCtl_maSyscallPanicsDisable 434
#define maIOCtl_maSyscallPanicsDisable_case(func) \
case 434: \
{ \
return func(); \
} \


#endif	//MAAPI_DEFS_H
