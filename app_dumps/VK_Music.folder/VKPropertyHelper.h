/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKObject.h"
#import "VK_Music-Structs.h"

@class NSString;

@interface VKPropertyHelper : VKObject {
	BOOL _isPrimitive;
	BOOL _isModelsArray;
	BOOL _isModel;
	NSString* _propertyName;
	NSString* _propertyClassName;
	Class _propertyClass;
	objc_property* _property;
}
@property(assign, nonatomic) BOOL isModel;
@property(assign, nonatomic) BOOL isModelsArray;
@property(assign, nonatomic) BOOL isPrimitive;
@property(retain, nonatomic) Class propertyClass;
@property(retain, nonatomic) NSString* propertyClassName;
@property(retain, nonatomic) NSString* propertyName;
@property(assign, nonatomic) objc_property* property;
-(void).cxx_destruct;
-(id)initWith:(objc_property*)with;
@end
