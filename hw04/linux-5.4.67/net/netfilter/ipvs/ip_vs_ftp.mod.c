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
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xe09b169f, "ip_vs_conn_in_get" },
	{ 0x9a5e7275, "skb_ensure_writable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1bdec963, "ip_vs_conn_new" },
	{ 0x4d68f244, "ip_vs_nfct_expect_related" },
	{ 0x286f89ba, "__nf_nat_mangle_tcp_packet" },
	{ 0x1a8c356, "ip_vs_conn_put" },
	{ 0x24e19c0a, "ip_vs_tcp_conn_listen" },
	{ 0xa916b694, "strnlen" },
	{ 0x40f6d909, "ip_vs_conn_out_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xc5850110, "printk" },
	{ 0x9e0665ab, "register_ip_vs_app_inc" },
	{ 0x8f0c4129, "register_ip_vs_app" },
	{ 0x170ef543, "unregister_ip_vs_app" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "4625A1061038DA4191556E9");
