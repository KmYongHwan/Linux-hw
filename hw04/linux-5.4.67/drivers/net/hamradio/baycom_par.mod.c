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
	{ 0xa2473f3d, "hdlcdrv_unregister" },
	{ 0xf7871355, "parport_unregister_driver" },
	{ 0x90bc8f38, "hdlcdrv_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x69539117, "__parport_register_driver" },
	{ 0xaee61141, "hdlcdrv_arbitrate" },
	{ 0x57d0f6d1, "hdlcdrv_receiver" },
	{ 0xd6bcb8ed, "hdlcdrv_transmitter" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa916b694, "strnlen" },
	{ 0x349cba85, "strchr" },
	{ 0xb0a23144, "parport_register_dev_model" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1570660, "parport_put_port" },
	{ 0x7549f3f8, "parport_find_base" },
	{ 0xc65846c4, "parport_unregister_device" },
	{ 0x9eb4f9a2, "parport_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xc4963523, "parport_claim" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlcdrv,parport");


MODULE_INFO(srcversion, "4B0664F94B6283F9E1E6B65");
