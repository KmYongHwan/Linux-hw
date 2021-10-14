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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85b7373, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cti,ads7950");
MODULE_ALIAS("of:N*T*Cti,ads7950C*");
MODULE_ALIAS("of:N*T*Cti,ads7951");
MODULE_ALIAS("of:N*T*Cti,ads7951C*");
MODULE_ALIAS("of:N*T*Cti,ads7952");
MODULE_ALIAS("of:N*T*Cti,ads7952C*");
MODULE_ALIAS("of:N*T*Cti,ads7953");
MODULE_ALIAS("of:N*T*Cti,ads7953C*");
MODULE_ALIAS("of:N*T*Cti,ads7954");
MODULE_ALIAS("of:N*T*Cti,ads7954C*");
MODULE_ALIAS("of:N*T*Cti,ads7955");
MODULE_ALIAS("of:N*T*Cti,ads7955C*");
MODULE_ALIAS("of:N*T*Cti,ads7956");
MODULE_ALIAS("of:N*T*Cti,ads7956C*");
MODULE_ALIAS("of:N*T*Cti,ads7957");
MODULE_ALIAS("of:N*T*Cti,ads7957C*");
MODULE_ALIAS("of:N*T*Cti,ads7958");
MODULE_ALIAS("of:N*T*Cti,ads7958C*");
MODULE_ALIAS("of:N*T*Cti,ads7959");
MODULE_ALIAS("of:N*T*Cti,ads7959C*");
MODULE_ALIAS("of:N*T*Cti,ads7960");
MODULE_ALIAS("of:N*T*Cti,ads7960C*");
MODULE_ALIAS("of:N*T*Cti,ads7961");
MODULE_ALIAS("of:N*T*Cti,ads7961C*");
MODULE_ALIAS("spi:ads7950");
MODULE_ALIAS("spi:ads7951");
MODULE_ALIAS("spi:ads7952");
MODULE_ALIAS("spi:ads7953");
MODULE_ALIAS("spi:ads7954");
MODULE_ALIAS("spi:ads7955");
MODULE_ALIAS("spi:ads7956");
MODULE_ALIAS("spi:ads7957");
MODULE_ALIAS("spi:ads7958");
MODULE_ALIAS("spi:ads7959");
MODULE_ALIAS("spi:ads7960");
MODULE_ALIAS("spi:ads7961");

MODULE_INFO(srcversion, "CCBD796C53AE0F33A56ADFF");
