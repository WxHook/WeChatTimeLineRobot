/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIButton.h"

@class RightTopMenuItemBtnData;

@interface RightTopMenuItemBtn : MMUIButton {
	RightTopMenuItemBtnData* m_data;
}
@property(retain, nonatomic) RightTopMenuItemBtnData* m_data;
-(void).cxx_destruct;
-(id)initWithBtnData:(id)btnData showNew:(BOOL)aNew;
-(CGRect)imageRectForContentRect:(CGRect)contentRect;
@end
