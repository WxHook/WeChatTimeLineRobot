/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ContactTagItem : XXUnknownSuperclass <NSCoding> {
	unsigned m_uiID;
	NSString* m_nsName;
}
@property(retain, nonatomic) NSString* m_nsName;
@property(assign, nonatomic) unsigned m_uiID;
-(void).cxx_destruct;
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end

