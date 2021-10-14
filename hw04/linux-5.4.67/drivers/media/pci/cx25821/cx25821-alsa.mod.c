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
	{ 0xd54709d9, "driver_for_each_device" },
	{ 0xc3d38a82, "driver_find" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0x16a91c73, "cx25821_risc_databuffer_audio" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdd64e639, "strscpy" },
	{ 0x65523885, "snd_card_new" },
	{ 0x4131670b, "snd_pcm_hw_constraint_pow2" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12c36671, "cx25821_sram_channel_setup_audio" },
	{ 0xde583603, "cx25821_set_gpiopin_direction" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0xf49a5722, "cx25821_sram_channel_dump_audio" },
	{ 0xe9050411, "cx25821_sram_channels" },
	{ 0xc5850110, "printk" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x44b517f5, "cx25821_print_irqbits" },
	{ 0x68a57338, "snd_card_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,cx25821,snd");

MODULE_ALIAS("pci:v000014F1d00000920sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "549CED33EE85A1CCB4DF3EB");
