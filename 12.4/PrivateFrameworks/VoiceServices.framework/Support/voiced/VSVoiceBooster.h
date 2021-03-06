//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VSVoiceBooster : NSObject
{
    float _voiceBoostGainDecibels;
    unsigned long long _pcmBufferSize;
    struct OpaqueAudioConverter *_floatConverter;
    struct OpaqueAudioConverter *_integerConverter;
    struct OpaqueAudioComponentInstance *_voiceBoostUnit;
    struct AudioStreamBasicDescription _asbd;
    struct AudioTimeStamp _audioTimeStamp;
}

@property(nonatomic) struct AudioTimeStamp audioTimeStamp; // @synthesize audioTimeStamp=_audioTimeStamp;
@property(nonatomic) struct OpaqueAudioComponentInstance *voiceBoostUnit; // @synthesize voiceBoostUnit=_voiceBoostUnit;
@property(nonatomic) struct OpaqueAudioConverter *integerConverter; // @synthesize integerConverter=_integerConverter;
@property(nonatomic) struct OpaqueAudioConverter *floatConverter; // @synthesize floatConverter=_floatConverter;
@property(nonatomic) unsigned long long pcmBufferSize; // @synthesize pcmBufferSize=_pcmBufferSize;
@property(nonatomic) struct AudioStreamBasicDescription asbd; // @synthesize asbd=_asbd;
@property(nonatomic) float voiceBoostGainDecibels; // @synthesize voiceBoostGainDecibels=_voiceBoostGainDecibels;
- (id)processData:(id)arg1;
- (void)uninitialize;
- (_Bool)initialize;
- (void)dealloc;
- (id)initWithStreamDescription:(struct AudioStreamBasicDescription)arg1 pcmBufferSize:(unsigned long long)arg2;

@end

