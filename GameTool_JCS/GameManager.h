/*******************************************************************
*                   JCSCC_Framework Version 1.0
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*   See LICENSE.txt for modification and distribution information
*                Copyright (c) 2016 by Shen, Jen-Chieh
******************************************************************/

#ifndef __GAME_MANAGER_H__
#define __GAME_MANAGER_H__

#include "GameTool_StdAfx.h"

namespace JCS_GameTool
{

    //------------------------------------------------------------------------------------
    // Name : GameManager 
    //
    // Desc : 
    //------------------------------------------------------------------------------------
    class GameManager
    {
    private:
        static GameManager* s_pGameManager;

        bool m_gamePaused;        // use when we want to stop the game

        // Constructor
        GameManager();

    public:
        /**
         * Singleton 不同Impl方法
         * http://stackoverflow.com/questions/13047526/difference-between-singleton-implemention-using-pointer-and-using-static-object
         */
        static GameManager* getInstance()
        {
            if (!s_pGameManager)
                s_pGameManager = new GameManager;
            return s_pGameManager;        // singleton
        }
        virtual ~GameManager();

        // setter
        void setGamePause(bool pause) { this->m_gamePaused = pause; }

        // getter
        bool isGamePause() const { return this->m_gamePaused; }        // 檢查是否為暫停遊戲

    };

}

typedef JCS_GameTool::GameManager GameManager;

#endif // __GAME_MANAGER_H__

