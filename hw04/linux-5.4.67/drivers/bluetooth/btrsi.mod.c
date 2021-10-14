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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xade4637f, "hci_register_dev" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0xfaf08463, "hci_unregister_dev" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd0f037bf, "hci_alloc_dev" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xb18156be, "skb_pull" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0e602eb, "memmove" },
	{ 0x1b4777, "hci_free_dev" },
	{ 0x9c160d9e, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "7F6D30AB7271586419B7871");
