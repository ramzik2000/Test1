package com.example.novicks

import android.content.Intent
import android.graphics.Color
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.Toast
import kotlinx.android.synthetic.main.activity_main.*
import java.util.*
import kotlin.collections.ArrayList


class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)


    }

    fun push(view: View){
        val sel = view as Button
        var cell = 0
        when(sel.id){
            R.id.but1 -> cell = 1
            R.id.but2 -> cell = 2
            R.id.but3 -> cell = 3
            R.id.but4 -> cell = 4
            R.id.but5 -> cell = 5
            R.id.but6 -> cell = 6
            R.id.but7 -> cell = 7
            R.id.but8 -> cell = 8
            R.id.but9 -> cell = 9
        }
        start(cell, sel)
    }
    var p1 = ArrayList<Int>()
    var p2 = ArrayList<Int>()
    var activeP = true
    private fun start(cell: Int, sel: Button) {
        if (activeP == true) {
            sel.text = "X"
            sel.setBackgroundColor(Color.parseColor("Green"))
            p1.add(cell)
            activeP = false
            auto()

        }
        else {
            sel.text ="0"
            sel. setBackgroundColor(Color.parseColor("Red"))
            p2.add(cell)
            activeP = true
        }
        sel.isEnabled =  false
        checkWinner()
    }

    private fun checkWinner() {
        var win =-1
        if(p1.contains(1) && p1.contains(2) && p1.contains(3) ||
                p1.contains(4) && p1.contains(5) && p1.contains(6) ||
                p1.contains(7) && p1.contains(8) && p1.contains(9) ||
                p1.contains(1) && p1.contains(5) && p1.contains(9) ||
                p1.contains(3) && p1.contains(5) && p1.contains(7) ||
                p1.contains(1) && p1.contains(4) && p1.contains(7) ||
                p1.contains(2) && p1.contains(5) && p1.contains(8) ||
                p1.contains(3) && p1.contains(6) && p1.contains(9)   ){
            win = 1

        }

        if(p2.contains(1) && p2.contains(2) && p2.contains(3) ||
                p2.contains(4) && p2.contains(5) && p2.contains(6) ||
                p2.contains(7) && p2.contains(8) && p2.contains(9) ||
                p2.contains(1) && p2.contains(5) && p2.contains(9) ||
                p2.contains(3) && p2.contains(5) && p2.contains(7) ||
                p2.contains(1) && p2.contains(4) && p2.contains(7) ||
                p2.contains(2) && p2.contains(5) && p2.contains(8) ||
                p2.contains(3) && p2.contains(6) && p2.contains(9)   ){
            win = 2

        }
        if(win != -1){
            if(win ==1){
                Toast.makeText(this, "Player 1 win", Toast.LENGTH_LONG).show()
            }
            if(win ==2){
                Toast.makeText(this, "Player 2 win", Toast.LENGTH_LONG).show()
            }
        }
    }
    private fun auto(){
        var emptyCells = ArrayList<Int>()
        for (cell in 1..9){
            if(!(p1.contains(cell) || p2.contains(cell))){
                emptyCells.add(cell)
            }
        }
        val r = Random()
        val ranIndex= r.nextInt(emptyCells.size-0)+0
        val cell = emptyCells[ranIndex]
        val sel:Button
        when(cell){
            1->sel =but1
            2->sel =but2
            3->sel =but3
            4->sel =but4
            5->sel =but5
            6->sel =but6
            7->sel =but7
            8->sel =but8
            9->sel =but9
            else -> sel =but1
        }
        start(cell, sel)
    }

}


