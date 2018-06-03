//
//  MPEditorView.h
//  MacDown
//
//  Created by Tzu-ping Chung  on 30/8.
//  Copyright (c) 2014 Tzu-ping Chung . All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MPEditorView : NSTextView

@property BOOL scrollsPastEnd;

/** If set, the insertion point will be placed on that line when file is open.
 *
 * @see openUrlSchemeAppleEvent
 */
@property (nonatomic, strong) NSNumber *insertionPointLineNumber;

/** If set, the insertion point will be placed on that column when file is open.
 *
 * @see openUrlSchemeAppleEvent in MPMainController.
 */
@property (nonatomic, strong) NSNumber *insertionPointColumnNumber;

- (NSRect)contentRect;

@end
