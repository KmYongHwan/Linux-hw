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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0x3f0586ec, "st_sensors_set_dataready_irq" },
	{ 0x97c337c, "st_sensors_power_enable" },
	{ 0xd2c258d, "st_sensors_set_enable" },
	{ 0x74d7047, "st_sensors_trigger_handler" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xacae7ef4, "st_sensors_deallocate_trigger" },
	{ 0x211202aa, "st_sensors_sysfs_sampling_frequency_avail" },
	{ 0xddc3a79e, "st_sensors_allocate_trigger" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xecd864ce, "st_sensors_set_fullscale_by_gain" },
	{ 0xfcb82fb0, "st_sensors_validate_device" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0xbf7cd038, "st_sensors_power_disable" },
	{ 0xcc3a87bd, "st_sensors_init_sensor" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x67836ebd, "st_sensors_debugfs_reg_access" },
	{ 0x30e7ed1f, "st_sensors_get_settings_index" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaa3fb065, "st_sensors_set_odr" },
	{ 0x2f712edc, "st_sensors_sysfs_scale_avail" },
	{ 0xaac455d3, "st_sensors_verify_id" },
	{ 0xf59b42dc, "st_sensors_read_info_raw" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,st_sensors,industrialio");


MODULE_INFO(srcversion, "A1D1F6375E6AB09C352117C");
