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
	{ 0x588f0134, "iio_enum_available_read" },
	{ 0x6ec70757, "iio_enum_write" },
	{ 0x51c6dcb2, "iio_enum_read" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xf9cab61c, "iio_triggered_event_setup" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x85b7373, "spi_sync" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc7666132, "spi_write_then_read" },
	{ 0x99158d55, "iio_triggered_event_cleanup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-event");

MODULE_ALIAS("spi:hi8435");
MODULE_ALIAS("of:N*T*Cholt,hi8435");
MODULE_ALIAS("of:N*T*Cholt,hi8435C*");

MODULE_INFO(srcversion, "A0D4420A39FB40E22D7BB81");
