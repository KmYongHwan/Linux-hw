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
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0xeeb114b8, "ovs_netdev_tunnel_destroy" },
	{ 0x1ecf1067, "ovs_vport_ops_unregister" },
	{ 0xd6e9a901, "__ovs_vport_ops_register" },
	{ 0x78139511, "ovs_vport_free" },
	{ 0x7f7bf899, "rtnl_delete_link" },
	{ 0x9e761bbb, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x83a5b6bb, "dev_change_flags" },
	{ 0xf08fcaa3, "geneve_dev_create_fb" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x861ec7c2, "ovs_vport_alloc" },
	{ 0xcd279169, "nla_find" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "openvswitch,geneve");


MODULE_INFO(srcversion, "F56BB592637952CF75480BC");
