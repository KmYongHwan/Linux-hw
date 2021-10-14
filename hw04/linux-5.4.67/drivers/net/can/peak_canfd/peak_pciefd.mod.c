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
	{ 0xcb3f70cb, "register_candev" },
	{ 0x21243b85, "alloc_can_err_skb" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xe3b8b26d, "can_bus_off" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x8eb937e0, "close_candev" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf006d007, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf2acf242, "free_candev" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x601aeedc, "can_change_mtu" },
	{ 0x34d75208, "can_change_state" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4013106f, "unregister_candev" },
	{ 0x2b4b5e45, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x127bd30c, "open_candev" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x1498124e, "alloc_canfd_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0xf3e771b0, "can_get_echo_skb" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x15314fce, "consume_skb" },
	{ 0xd8b09a7d, "can_put_echo_skb" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("pci:v0000001Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd0000001Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D6CAE5F684E0A6B52076E75");
