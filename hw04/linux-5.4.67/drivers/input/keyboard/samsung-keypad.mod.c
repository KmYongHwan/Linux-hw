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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf4358872, "devm_kfree" },
	{ 0xff76d558, "input_register_device" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x890ce5c1, "matrix_keypad_build_keymap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5ada0011, "input_event" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("platform:samsung-keypad");
MODULE_ALIAS("platform:s5pv210-keypad");

MODULE_INFO(srcversion, "7B4A5C84D6C53B47884AD4C");
