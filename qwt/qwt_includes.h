#include <qwt.h>
#include <qwt_global.h>

#if QWT_VERSION >= 0x050000 && QWT_VERSION < 0x060000
#include <qwt_abstract_scale.h>
#include <qwt_abstract_scale_draw.h>
#include <qwt_abstract_slider.h>
#include <qwt_analog_clock.h>
#include <qwt_array.h>
#include <qwt_arrow_button.h>
#include <qwt_clipper.h>
#include <qwt_color_map.h>
#include <qwt_compass.h>
#include <qwt_compass_rose.h>
#include <qwt_counter.h>
#include <qwt_curve_fitter.h>
#include <qwt_data.h>
#include <qwt_dial.h>
#include <qwt_dial_needle.h>
#include <qwt_double_interval.h>
#include <qwt_double_range.h>
#include <qwt_double_rect.h>
#include <qwt_dyngrid_layout.h>
#include <qwt_event_pattern.h>
#include <qwt_interval_data.h>
#include <qwt_knob.h>
#include <qwt_layout_metrics.h>
#include <qwt_legend.h>
#include <qwt_legend_item.h>
#include <qwt_legend_itemmanager.h>
#include <qwt_magnifier.h>
#include <qwt_math.h>
#include <qwt_paint_buffer.h>
#include <qwt_painter.h>
#include <qwt_panner.h>
#include <qwt_picker.h>
#include <qwt_picker_machine.h>
#include <qwt_plot.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_dict.h>
#include <qwt_plot_grid.h>
#include <qwt_plot_item.h>
#include <qwt_plot_layout.h>
#include <qwt_plot_magnifier.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_picker.h>
#include <qwt_plot_printfilter.h>
#include <qwt_plot_rasteritem.h>
#include <qwt_plot_rescaler.h>
#include <qwt_plot_scaleitem.h>
#include <qwt_plot_spectrogram.h>

#ifndef Q_WS_MAC    // this doesn't seem to exist on OS X
#include <qwt_plot_svgitem.h>
#endif

#include <qwt_plot_zoomer.h>
#include <qwt_polygon.h>
#include <qwt_raster_data.h>
#include <qwt_round_scale_draw.h>
#include <qwt_scale_div.h>
#include <qwt_scale_draw.h>
#include <qwt_scale_engine.h>
#include <qwt_scale_map.h>
#include <qwt_scale_widget.h>
#include <qwt_slider.h>
#include <qwt_spline.h>
#include <qwt_symbol.h>
#include <qwt_text.h>
#include <qwt_text_engine.h>
#include <qwt_text_label.h>
#include <qwt_thermo.h>
#include <qwt_valuelist.h>
#include <qwt_wheel.h>

#include <qvariant.h>

#elif QWT_VERSION >= 0x060000
#include <qwt_abstract_legend.h>
#include <qwt_abstract_scale_draw.h>
#include <qwt_abstract_scale.h>
#include <qwt_abstract_slider.h>
#include <qwt_analog_clock.h>
#include <qwt_arrow_button.h>
#include <qwt_clipper.h>
#include <qwt_color_map.h>
#include <qwt_column_symbol.h>
#include <qwt_compass.h>
#include <qwt_compass_rose.h>
#include <qwt_compat.h>
#include <qwt_counter.h>
#include <qwt_curve_fitter.h>
#include <qwt_date.h>
#include <qwt_date_scale_draw.h>
#include <qwt_date_scale_engine.h>
#include <qwt_dial.h>
#include <qwt_dial_needle.h>
#include <qwt_dyngrid_layout.h>
#include <qwt_event_pattern.h>
#include <qwt_graphic.h>
#include <qwt_interval.h>
#include <qwt_interval_symbol.h>
#include <qwt_knob.h>
#include <qwt_legend_data.h>
#include <qwt_legend.h>
#include <qwt_legend_label.h>
#include <qwt_magnifier.h>
#include <qwt_math.h>
#include <qwt_matrix_raster_data.h>
#include <qwt_null_paintdevice.h>
#include <qwt_painter_command.h>
#include <qwt_painter.h>
#include <qwt_panner.h>
#include <qwt_picker.h>
#include <qwt_picker_machine.h>
#include <qwt_pixel_matrix.h>
#include <qwt_plot_abstract_barchart.h>
#include <qwt_plot_barchart.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_dict.h>
#include <qwt_plot_directpainter.h>
#include <qwt_plot_glcanvas.h>
#include <qwt_plot_grid.h>
#include <qwt_plot.h>
#include <qwt_plot_histogram.h>
#include <qwt_plot_intervalcurve.h>
#include <qwt_plot_item.h>
#include <qwt_plot_layout.h>
#include <qwt_plot_legenditem.h>
#include <qwt_plot_magnifier.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_multi_barchart.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_picker.h>
#include <qwt_plot_rasteritem.h>
#include <qwt_plot_renderer.h>
#include <qwt_plot_rescaler.h>
#include <qwt_plot_scaleitem.h>
#include <qwt_plot_seriesitem.h>
#include <qwt_plot_shapeitem.h>
#include <qwt_plot_spectrocurve.h>
#include <qwt_plot_spectrogram.h>
#include <qwt_plot_svgitem.h>
#include <qwt_plot_textlabel.h>
#include <qwt_plot_tradingcurve.h>
#include <qwt_plot_zoneitem.h>
#include <qwt_plot_zoomer.h>
#include <qwt_point_3d.h>
#include <qwt_point_data.h>
#include <qwt_point_mapper.h>
#include <qwt_point_polar.h>
#include <qwt_raster_data.h>
#include <qwt_round_scale_draw.h>
#include <qwt_samples.h>
#include <qwt_sampling_thread.h>
#include <qwt_scale_div.h>
#include <qwt_scale_draw.h>
#include <qwt_scale_engine.h>
#include <qwt_scale_map.h>
#include <qwt_scale_widget.h>
#include <qwt_series_data.h>
#include <qwt_series_store.h>
#include <qwt_slider.h>
#include <qwt_spline.h>
#include <qwt_symbol.h>
#include <qwt_system_clock.h>
#include <qwt_text_engine.h>
#include <qwt_text.h>
#include <qwt_text_label.h>
#include <qwt_thermo.h>
#include <qwt_transform.h>
#include <qwt_wheel.h>
#include <qwt_widget_overlay.h>

#include <QBitmap>
#endif
