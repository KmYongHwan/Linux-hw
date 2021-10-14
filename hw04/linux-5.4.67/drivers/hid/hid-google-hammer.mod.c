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
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xff76d558, "input_register_device" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x5ada0011, "input_event" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9af4f82, "cros_ec_cmd_xfer_status" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g0001v000018D1p00005022");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000503D");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000503C");
MODULE_ALIAS("hid:b0003g0001v000018D1p00005044");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000502B");
MODULE_ALIAS("hid:b0003g0001v000018D1p0000502D");
MODULE_ALIAS("hid:b0003g0001v000018D1p00005030");
MODULE_ALIAS("acpi*:GOOG000B:*");

MODULE_INFO(srcversion, "D4704EEFFBDBAF15BAC59D9");
