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
	{ 0x1295e8d6, "xt_unregister_target" },
	{ 0xc29215c9, "xt_register_target" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xe7b9a75, "synproxy_send_client_synack" },
	{ 0x15314fce, "consume_skb" },
	{ 0xf60943ee, "synproxy_recv_client_ack" },
	{ 0x3d3882e1, "synproxy_parse_options" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x11cd0f2b, "nf_ip_checksum" },
	{ 0xb28ba6e2, "nf_synproxy_ipv4_init" },
	{ 0xe85e7763, "nf_ct_netns_get" },
	{ 0xa615716f, "nf_ct_netns_put" },
	{ 0xc5c32773, "nf_synproxy_ipv4_fini" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "EF3EF3062AC91BE0263B6DB");
