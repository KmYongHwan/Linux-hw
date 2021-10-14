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
	{ 0xede283d, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x71deb539, "request_firmware" },
	{ 0x923438df, "devm_device_add_group" },
	{ 0xff76d558, "input_register_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc946d02b, "i2c_smbus_xfer" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:mip4_ts");
MODULE_ALIAS("acpi*:MLFS0000:*");

MODULE_INFO(srcversion, "7C513125E1582D5C570005D");
