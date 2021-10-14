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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x71227479, "genl_unregister_family" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x1c06f459, "genl_register_family" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0x3785c132, "init_net" },
	{ 0xb9189240, "genl_notify" },
	{ 0x546e109c, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x428a36f, "ieee802154_alloc_hw" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x789d8622, "genlmsg_put" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xe1f074c8, "ieee802154_free_hw" },
	{ 0xa19ac719, "ieee802154_unregister_hw" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6c5b8787, "ieee802154_xmit_complete" },
	{ 0x54d29d1e, "ieee802154_rx_irqsafe" },
	{ 0xff587612, "__pskb_copy_fclone" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");


MODULE_INFO(srcversion, "62C65E2BA611BA53F7D0F4B");
