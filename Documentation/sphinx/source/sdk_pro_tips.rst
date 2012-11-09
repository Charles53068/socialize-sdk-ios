.. include:: feedback_widget.rst

===============================
SDK Pro Tips
===============================

Building the SDK from source
--------------------------------

Before using the Socialize source, you should be sure you initialize the submodules with
'git submodule update --init --recursive'.

The framework can be built with the command "make framework". The output of
this command’s execution will be the embedded static framework in the
build/Socialize.embeddedframework directory of the project

A sample app is included in the SampleSdkApp subdirectory of the Socialize source tree.

* If you experience any problems with user credentials, you can perform a manual xcodebuild with override as follows:

    xcodebuild -workspace socialize-sdk-ios.xcworkspace -scheme "Socialize Framework" -configuration Release -sdk iphoneos build PROVISIONING_PROFILE="User provision profile" CODE_SIGN_IDENTITY="iPhone Distribution: user identity"
