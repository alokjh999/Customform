<div class="row">
    <div class="small-12 medium-12 large-8 columns">

        <div class="row">
            <div class="small-12 columns">
                <h5>Contact Information</h5>
            </div>
        </div>

        <div class="row">
            <div class="small-12 large-6 medium-6 columns">
                <?php print render($form['name']); ?>
            </div>
        </div>
		<div class="row">
            <div class="small-12 large-6 medium-6 columns">
                <?php print render($form['email']); ?>
            </div>
        </div>
		<div class="row">
            <div class="small-12 large-6 medium-6 columns">
                <?php print render($form['mobile']); ?>
            </div>
        </div>
		<div class="row">
            <div class="small-12 large-6 medium-6 columns">
                <?php print render($form['address']); ?>
            </div>
        </div>
		<div class="row">
            <div class="small-12 large-6 medium-6 columns">
                <?php print render($form['city']); ?>
            </div>
        </div>
		<div class="row">
            <div class="small-12 large-6 medium-6 columns">
                <?php print render($form['state']); ?>
            </div>
        </div>
    </div>

    <div class="row">
        <div class="small-12 medium-12 large-8 large-offset-2 columns">
            <?php print render($form['submit']); ?>
        </div>
    </div>
</div>

<!-- Render any remaining elements, such as hidden inputs (token, form_id, etc). -->
<?php print drupal_render_children($form); ?>