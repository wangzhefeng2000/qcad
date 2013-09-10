// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMASHAREDPOINTERTEXTBASEDDATA_H
        #define RECMASHAREDPOINTERTEXTBASEDDATA_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RTextBasedData.h"
            
            typedef QSharedPointer<RTextBasedData> RTextBasedDataPointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaSharedPointerTextBasedData {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRPainterPathSource(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RPainterPathSource:
        

        // methods of secondary base class RPainterPathSource:
        

    // properties:
    

    // public methods:
    static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        sync
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointOnEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenterPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointsWithDistanceToEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        intersectsWith
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAlignmentPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAlignmentPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFontName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFontName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isBold
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBold
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isItalic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setItalic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTextHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTextWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVAlign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVAlign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setHAlign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHAlign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDrawingDirection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDrawingDirection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLineSpacingStyle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLineSpacingStyle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLineSpacingFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLineSpacingFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSimple
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSimple
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipHorizontal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipVertical
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlainText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEscapedText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMainFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        update
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isDirty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExploded
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestPointOnEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toEscapedText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toRichText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RTextBasedData* getSelf(const QString& fName, QScriptContext* context)
    ;static RTextBasedData* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    