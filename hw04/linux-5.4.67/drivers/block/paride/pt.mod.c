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
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x752832c, "noop_llseek" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x88e96942, "device_create" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x66414bc7, "__class_create" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0xb21ba07d, "pi_unregister_driver" },
	{ 0x7881831c, "pi_release" },
	{ 0x8713625d, "pi_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4267110a, "pi_register_driver" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4b6cef0, "pi_read_block" },
	{ 0x9ee6f33b, "pi_disconnect" },
	{ 0x21e1aa76, "pi_write_block" },
	{ 0xc10130bd, "pi_write_regr" },
	{ 0x66429791, "pi_connect" },
	{ 0xc5850110, "printk" },
	{ 0x158662ff, "pi_read_regr" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "paride");


MODULE_INFO(srcversion, "A6D962B43A95846D5B88683");
