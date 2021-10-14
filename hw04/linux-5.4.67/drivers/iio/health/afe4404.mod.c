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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0x4074809f, "regmap_multi_reg_write" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xb83fb93d, "devm_regmap_field_alloc" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x96848186, "scnprintf" },
	{ 0x4dce7dd4, "iio_format_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0xc066a4ca, "regmap_field_read" },
	{ 0x395d7993, "regmap_field_update_bits_base" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:afe4404");
MODULE_ALIAS("of:N*T*Cti,afe4404");
MODULE_ALIAS("of:N*T*Cti,afe4404C*");

MODULE_INFO(srcversion, "DEC7A0705544CEFFE18B813");
