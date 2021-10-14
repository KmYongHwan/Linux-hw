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
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");


MODULE_INFO(srcversion, "971CE13A4D8ED9A105B92B3");
