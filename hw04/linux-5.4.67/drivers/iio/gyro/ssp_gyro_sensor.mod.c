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
	{ 0x47dcfcb6, "ssp_common_buffer_postdisable" },
	{ 0x58c3277d, "ssp_common_buffer_postenable" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xb1151542, "ssp_common_process_data" },
	{ 0x98492948, "ssp_get_sensor_delay" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5fef2a5d, "ssp_change_delay" },
	{ 0x3ebe4a2c, "ssp_register_consumer" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0xbb9a2e75, "iio_device_attach_buffer" },
	{ 0xcc80f31e, "devm_iio_kfifo_allocate" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ssp_iio,sensorhub,industrialio,kfifo_buf");


MODULE_INFO(srcversion, "65BB3F0F91D40706619438E");
