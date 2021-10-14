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
	{ 0xd00f6eff, "no_seek_end_llseek" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x66414bc7, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7d3c75a7, "smp_call_function_single_async" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x88e96942, "device_create" },
	{ 0x29361773, "complete" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "94362896973583C3E6E82D1");
