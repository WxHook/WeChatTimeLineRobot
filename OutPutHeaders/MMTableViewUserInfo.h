/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSMutableDictionary;

@interface MMTableViewUserInfo : MMObject {
	NSMutableDictionary* _dicInfo;
	id _userInfo;
}
@property(retain, nonatomic) id userInfo;
-(void).cxx_destruct;
-(id)getUserInfoValueForKey:(id)key;
-(void)addUserInfoValue:(id)value forKey:(id)key;
@end
