<?php


/**
 * Implements hook_views_data()
 *
 */
function myform_views_data() {

 $table = array(
    'myform_data' => array(  
       'table' => array(
          'group' => 'Myform',      
             'base' => array(
               'field' => 'person_id',  //Primary key
               'title' => 'Myform Person Id',
               'help' => 'Myform Custom database table'
            )
        ),
		
     //Description of person_id
        'person_id' => array(  
           'title' => t('Myform Custom Id'),
           'help' => t('Myform Custom table  Id field'),
           'field' => array(
              'click sortable' => TRUE,  
            ),   
           'filter' => array(
               'handler' => 'views_handler_filter_numeric'   
            ),  

           'sort' => array(
              'handler' => 'views_handler_sort'       
           )
         ),
		 
		 
      //Description of Name field
        'name' => array(      
           'title' => t('Name'),
           'help' => t('Myform Custom table name field'),
           'field' => array(
              'click sortable' => TRUE,
           ),
           'filter' => array(
              'handler' => 'views_handler_filter_string'
           ),

           'sort' => array(
              'handler' => 'views_handler_sort'
           )
        ),
		
		//Description of email field
		'email' => array(      
           'title' => t('Email'),
           'help' => t('Myform Custom table email field'),
           'field' => array(
              'click sortable' => TRUE,
           ),
           'filter' => array(
              'handler' => 'views_handler_filter_string'
           ),

           'sort' => array(
              'handler' => 'views_handler_sort'
           )
        ),
		
		//Description of Mobile field
        'mobile' => array(      
           'title' => t('Mobile'),
           'help' => t('Myform Custom table  mobile field'),
           'field' => array(
              'click sortable' => TRUE,
           ),
           'filter' => array(
              'handler' => 'views_handler_filter_string'
           ),

           'sort' => array(
              'handler' => 'views_handler_sort'
           )
        ),
		
		//Description of address
		'address' => array(
			'title' => t('Address'),
			'help' => t('Myform custom table address field'),
			'field' => array(
				'click sortable' => TRUE,
			),
			'filter' => array(
				'handler' => 'views_handler_filter_string',
			),
			'sort' => array(
				'handler' => 'views_handler_sort'
			)
		),
		
		//Description of city
		'city' => array(
			'title' => t('City'),
			'help' => t('Myform custom table city field'),
			'field' => array(
				'click sortable' => TRUE,
			),
			'filter' => array(
				'handler' => 'views_handler_filter_string',
			),
			'sort' => array(
				'handler' => 'views_handler_sort'
			)
		),
		
		//Description of State
		'state' => array(
			'title' => t('State'),
			'help' => t('Myform custom table state field'),
			'field' => array(
				'click sortable' => TRUE,
			),
			'filter' => array(
				'handler' => 'views_handler_filter_string',
			),
			'sort' => array(
				'handler' => 'views_handler_sort'
			)
		)		
      )
    );
    return $table;
	
}