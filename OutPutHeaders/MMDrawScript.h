/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MCssParserDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface MMDrawScript : XXUnknownSuperclass <MCssParserDelegate> {
	NSMutableDictionary* m_drawScripts;
	BOOL m_isAlreadyParsed;
	BOOL m_isParseOK;
	BOOL m_isParseError;
	NSString* m_scriptFilePath;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_scriptFilePath;
@property(assign, nonatomic) BOOL m_isParseError;
@property(assign, nonatomic) BOOL m_isParseOK;
@property(assign, nonatomic) BOOL m_isAlreadyParsed;
@property(retain, nonatomic) NSMutableDictionary* m_drawScripts;
-(void).cxx_destruct;
-(void)clearAllScripts;
-(BOOL)loadScriptsFromPath:(id)path;
-(BOOL)startParse;
-(void)onCssParseEnd;
-(void)onCssParseStart;
-(id)onNextCssFile;
-(void)onParseErrorInFile:(id)file onLineNumber:(id)number withText:(id)text withErrorMessage:(id)errorMessage;
-(void)onReceiveCssRulesetWithSelectors:(id)selectors withDeclarations:(id)declarations;
-(void)onScriptFunctionWithSelectors:(id)selectors withStatements:(id)statements;
-(void)setDrawFunctionByName:(id)name withFunction:(id)function;
-(id)getDrawFunctionByName:(id)name;
@end
