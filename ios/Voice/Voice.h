
#import <React/RCTEventEmitter.h>
#ifdef RCT_NEW_ARCH_ENABLED
#import "com.akshaymahajan.voice"


@interface AkshayVoice : RCTEventEmitter <NativeVoiceIOSSpec>
#else
#import <React/RCTBridgeModule.h>

@interface AkshayVoice : RCTEventEmitter <RCTBridgeModule>
#endif

@end
