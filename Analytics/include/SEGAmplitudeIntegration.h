#import <Foundation/Foundation.h>
#import <Analytics.h>

#if defined(__has_include) && __has_include(<Amplitude_iOS/Amplitude.h>)
#import <Amplitude_iOS/Amplitude.h>
#else
#import "Amplitude.h"
#endif


@interface SEGAmplitudeIntegration : NSObject <SEGIntegration>

@property (nonatomic, strong) NSDictionary *settings;
@property (strong) Amplitude *amplitude;
@property (strong) AMPRevenue *amprevenue;
@property AMPIdentify *identify;
@property NSSet *traitsToIncrement;
@property NSSet *traitsToSetOnce;

- (id)initWithSettings:(NSDictionary *)settings;
- (id)initWithSettings:(NSDictionary *)settings andAmplitude:(Amplitude *)amplitude andAmpRevenue:(AMPRevenue *)amprevenue andAmpIdentify:(AMPIdentify *)identify;

@end
