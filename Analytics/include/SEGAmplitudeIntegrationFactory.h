#import <Foundation/Foundation.h>
#import "../Classes/Integrations/SEGIntegrationFactory.h"


@interface SEGAmplitudeIntegrationFactory : NSObject <SEGIntegrationFactory>

+ (instancetype)instance;

@end
