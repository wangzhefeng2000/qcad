// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMATEXTBASEDENTITY_H
        #define RECMATEXTBASEDENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RTextBasedEntity.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaTextBasedEntity {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEntity
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
        getTextData
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
        getPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAlignmentPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVAlign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHAlign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFontName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFontName
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
        getEscapedText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPlainText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        sync
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RTextBasedEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static RTextBasedEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    