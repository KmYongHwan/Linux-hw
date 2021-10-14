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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x44354e37, "tcp_reno_undo_cwnd" },
	{ 0xc2b1e781, "tcp_unregister_congestion_control" },
	{ 0xe8347ad4, "tcp_register_congestion_control" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x52c4e87, "tcp_enter_cwr" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x1eba7489, "tcp_reno_cong_avoid" },
	{ 0xfb578fc5, "memset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3014C48B4010368132F2891");
