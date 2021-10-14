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
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xe6a2b456, "snd_ac97_tune_hardware" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xcdfd2681, "snd_dma_alloc_pages" },
	{ 0x323ad9a7, "snd_pcm_hw_constraint_msbits" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc4142837, "seq_printf" },
	{ 0x52333687, "snd_pci_quirk_lookup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xeaa81cf2, "snd_ac97_pcm_assign" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb09d3847, "snd_ac97_get_short_name" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0xf10de535, "ioread8" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x96e6727d, "param_ops_bint" },
	{ 0xacc21c79, "snd_ac97_suspend" },
	{ 0x65523885, "snd_card_new" },
	{ 0xee51f894, "snd_ac97_update_power" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x613d3b63, "snd_ac97_pcm_double_rate_rules" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5edd2a6c, "snd_dma_free_pages" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe17dcab, "snd_ac97_bus" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9afcdd42, "snd_ac97_mixer" },
	{ 0x4ea3024b, "snd_ac97_update_bits" },
	{ 0x16cc630c, "snd_card_rw_proc_new" },
	{ 0xe18576ad, "snd_ac97_set_rate" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x9e5f1240, "snd_ac97_pcm_open" },
	{ 0xc5534d64, "ioread16" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x82351cde, "snd_pcm_add_chmap_ctls" },
	{ 0x30a78501, "snd_pcm_limit_hw_rates" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x27ad78fd, "snd_ac97_resume" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xaabf6ea3, "snd_ac97_pcm_close" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-ac97-codec,snd-pcm,snd");

MODULE_ALIAS("pci:v00008086d00002415sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002425sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002445sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002485sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007195sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000006Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000008Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000026Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007445sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005455sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CDFAEC61FC29588BB7F0F03");
