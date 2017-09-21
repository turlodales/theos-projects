/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MREventsFactory : XXUnknownSuperclass {
}
+(BOOL)isEventParamsCorrect:(id)correct;
+(BOOL)isEventNameCorrect:(id)correct;
+(id)eventWithType:(id)type name:(id)name value:(id)value params:(id)params timestamps:(id)timestamps timestampStart:(id)start timestampsSkipped:(id)skipped;
+(id)sessionEvent;
+(id)levelEventWithLevel:(id)level params:(id)params;
+(id)purchaseEventWithProduct:(id)product transaction:(id)transaction params:(id)params;
+(id)customEventWithName:(id)name params:(id)params;
+(id)standardEventWithType:(id)type params:(id)params;
+(id)standardEventWithType:(id)type;
+(id)updateEventWithAppVersion:(id)appVersion appBuild:(id)build timestamp:(double)timestamp;
+(id)installEventWithAppInstallTime:(double)appInstallTime timestamp:(double)timestamp;
@end

