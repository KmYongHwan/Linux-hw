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
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x3785c132, "init_net" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x29a9624a, "xt_hook_ops_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x669cfd86, "ipt_register_table" },
	{ 0xb0381c8, "ipt_alloc_initial_table" },
	{ 0xa8f702fe, "ip_route_me_harder" },
	{ 0x4d7c19e0, "ipt_do_table" },
	{ 0x249009e3, "ipt_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,ip_tables");


MODULE_INFO(srcversion, "CA7FA45ECED71F5723F2AD5");
