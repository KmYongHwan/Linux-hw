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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcd34c3c2, "__hid_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbd253f4c, "hid_hw_close" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0xa68a7b33, "hid_hw_open" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5923df6a, "hid_set_field" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0x29361773, "complete" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b*g0003v*p*");

MODULE_INFO(srcversion, "1D4ABD9A17D962F5C2E8151");
