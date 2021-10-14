#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x701201d, "hid_sensor_pm_ops" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xaada43b8, "sensor_hub_register_callback" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x989cd342, "hid_sensor_setup_trigger" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x910d5970, "sensor_hub_input_get_attribute_info" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbc0797d8, "hid_sensor_parse_common_attributes" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xada20bdd, "sensor_hub_input_attr_get_raw_value" },
	{ 0xcb53ad5a, "hid_sensor_power_state" },
	{ 0xe91c45c3, "hid_sensor_read_samp_freq_value" },
	{ 0xd769327, "hid_sensor_read_raw_hyst_value" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7c69b5e9, "hid_sensor_write_samp_freq_value" },
	{ 0xff0c1463, "hid_sensor_write_raw_hyst_value" },
	{ 0x37a0cba, "kfree" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xb75e46e7, "hid_sensor_remove_trigger" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbc19f3cd, "sensor_hub_remove_callback" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-sensor-trigger,hid-sensor-hub,industrialio,industrialio-triggered-buffer,hid-sensor-iio-common");

MODULE_ALIAS("platform:HID-SENSOR-200011");

MODULE_INFO(srcversion, "50053E3DC40E398F16BE104");
