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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x2c0888b1, "cx88_risc_databuffer" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x4fdf30c3, "cx88_core_get" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x65523885, "snd_card_new" },
	{ 0xde524a62, "cx88_sram_channel_setup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4131670b, "snd_pcm_hw_constraint_pow2" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x104dd74e, "cx88_sram_channel_dump" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0xc5850110, "printk" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0x27927129, "cx88_core_irq" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x593cdcaa, "cx88_core_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdda5f243, "v4l2_ctrl_g_ctrl" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfe1df5a9, "v4l2_ctrl_find" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x68a57338, "snd_card_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,snd,cx88xx,videodev");

MODULE_ALIAS("pci:v000014F1d00008801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00008811sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8395DEA2DAFB2CB0D42A0C");
